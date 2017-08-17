#ifndef PRIMALIDADE_H
#define PRIMALIDADE_H

#include<iostream>

using namespace std;

/**
 * @brief funcao que verifica se um dado numero inteiro e primo
 * @param n numero
 * @param d divisor
 * @return 0, se o numero for primo, se não, retorna 1
 */
double Primo(int n, int d);

/**
 * @brief retorna o maior numero primo anterior
 * @param n numero
 * @return maior numero primo menor que o fatorial
 */
double maiorPrimo(int n);

#endif
