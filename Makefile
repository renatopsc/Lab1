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

# Nome do programa
PROG=LAB1
 
# Opcoes de compilacao
CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean doxy debug doc

# Define o alvo (target) para a compilacao completa.
# Ao final da compilacao, remove os arquivos objeto.
all: $(PROG)

debug: CFLAGS += -g -O0
debug: $(PROG)

# Alvo (target) para a construcao do executavel
# Define os arquivos *.o como dependencias
$(PROG): $(OBJ_DIR)/area.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o $(OBJ_DIR)/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel 'LAB1' criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto area.o
# Define os arquivos area.cpp e area.h como dependencias.
$(OBJ_DIR)/area.o: $(SRC_DIR)/area.cpp $(INC_DIR)/area.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto perimetro.o
# Define os arquivos perimetro.cpp e perimetro.h como dependencias.
$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/perimetro.cpp $(INC_DIR)/perimetro.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto volume.o
# Define os arquivos volume.cpp e volume.h como dependencias.
$(OBJ_DIR)/volume.o: $(SRC_DIR)/volume.cpp $(INC_DIR)/volume.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto main.o
# Define o arquivo main.cpp como dependencia.
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
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

