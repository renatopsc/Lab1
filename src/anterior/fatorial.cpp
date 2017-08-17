/**
 * @file	fatorial.cpp
 * @brief	Codigo fonte com a implementacao de funcao que calcula fatorial
 * @author	Wanderson Alves de Oliveira (wanderson.alves@live.com)
 */
#include<iostream>
#include "../include/anterior/fatorial.h"

using namespace std;

/**
 * @brief funcao que calcula de forma recursiva o fatorial 
 * @param n numero inteiro a ser calculado o fatorial
 * @return fatorial do numero
 */
double fatorial(double n) {
	if (n == 0) {				// Caso base da recursao
		return 1;
	}
	return n * fatorial(n-1);	// Chamada recursiva
}
