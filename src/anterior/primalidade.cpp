/**
 * @file	primalidade.cpp
 * @brief	Codigo fonte com a implementacao de funcao que verifica se o numero e primo
 * @author	Wanderson Alves de Oliveira (wanderson.alves@live.com)
 */
#include<iostream>
#include "../include/anterior/primalidade.h"

using namespace std;

/**
 * @brief funcao que verifica se um dado numero inteiro e primo
 * @param n numero
 * @param d divisor
 * @return 0, se o numero for primo, se não, retorna 1
 */
double Primo(int n, int d) {
	if (n == 1) {
		return 0;						
	} else {
		if (d == 1) {
			return 1;					
		} else {
			if (n % d == 0) {
				return 0;				
			} else {
				return Primo(n, d-1);	
			}
		}
	}
}

/**
 * @brief retorna o maior numero primo anterior
 * @param n numero
 * @return maior numero primo menor que o fatorial
 */
double maiorPrimo(int n) {
	for (int i = n; i > 2; i--) {
		if (Primo(i, i-1)) {
			return i;
		}
	}
	return n;
}

