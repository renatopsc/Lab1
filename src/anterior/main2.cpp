/**
 * @file	main.cpp
 * @brief	Codigo fonte com a funçao principal do projeto
 * @author	Wanderson Alves de Oliveira (wanderson.alves@live.com)
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include "../include/anterior/primalidade.h"
#include "../include/anterior/fatorial.h"

/** 
 * @brief Funcao principal 
 * @param argc nº de argumentos de entrada
 * @param argv argumentos recebidos
 */
int main(int argc, char* argv[]) {
	/* Verifica se a entrada foi feita corretamente*/
	if (argc != 2) {
		cout << "Execucao de maneira incorreta" << endl;
		cout << "Como usar: ./anterior <numero inteiro>" << endl;
		return 0;
	} else {
		int n = atoi(argv[1]);
		if (n <= 1) {
			cout << "Nao e possivel determinar numero primo" << endl;
			return 0;
		} else {
			double fat = fatorial(n);		
			double x = maiorPrimo(fat);
			cout << "Maior numero primo anterior ao fatorial de " << n << " (" << fat << ")" << " eh " << x << endl;
			return 0;
		}
	}
}
