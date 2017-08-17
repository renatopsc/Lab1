#MAKEFILE
RM = rm -rf 

# Compilador
CC=g++ 

# Variaveis para os subdiretorios
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test
 
# Opcoes de compilacao
CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean doxy debug doc

# Define o alvo (target) para a compilacao completa.
# Ao final da compilacao, remove os arquivos objeto.
all: geometrica	anterior

debug: CFLAGS += -g -O0
debug: geometrica	anterior

# Alvo (target) para a construcao do executavel
# Define os arquivos *.o como dependencias
geometrica: $(OBJ_DIR)/calcula.o $(OBJ_DIR)/area.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o $(OBJ_DIR)/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel 'geometrica' criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto calcula.o
# Define os arquivos calcula.cpp e calcula.h como dependencias.
$(OBJ_DIR)/calcula.o: $(SRC_DIR)/geometrica/calcula.cpp $(INC_DIR)/geometrica/calcula.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto area.o
# Define os arquivos area.cpp e area.h como dependencias.
$(OBJ_DIR)/area.o: $(SRC_DIR)/geometrica/area.cpp $(INC_DIR)/geometrica/area.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto perimetro.o
# Define os arquivos perimetro.cpp e perimetro.h como dependencias.
$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/geometrica/perimetro.cpp $(INC_DIR)/geometrica/perimetro.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto volume.o
# Define os arquivos volume.cpp e volume.h como dependencias.
$(OBJ_DIR)/volume.o: $(SRC_DIR)/geometrica/volume.cpp $(INC_DIR)/geometrica/volume.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto main.o
# Define o arquivo main.cpp como dependencia.
$(OBJ_DIR)/main.o: $(SRC_DIR)/geometrica/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do executavel
# Define os arquivos *.o como dependencias
anterior: $(OBJ_DIR)/fatorial.o $(OBJ_DIR)/primalidade.o $(OBJ_DIR)/main2.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel 'anterior' criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto fatorial.o
# Define os arquivos fatorial.cpp e fatorial.h como dependencias.
$(OBJ_DIR)/fatorial.o: $(SRC_DIR)/anterior/fatorial.cpp $(INC_DIR)/anterior/fatorial.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto primalidade.o
# Define os arquivos primalidade.cpp e primalidade.h como dependencias.
$(OBJ_DIR)/primalidade.o: $(SRC_DIR)/anterior/primalidade.cpp $(INC_DIR)/anterior/primalidade.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto main2.o
# Define o arquivo main2.cpp como dependencia.
$(OBJ_DIR)/main2.o: $(SRC_DIR)/anterior/main2.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen -g

doc:
	doxygen

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(BIN_DIR)/* 
	$(RM) $(OBJ_DIR)/*

