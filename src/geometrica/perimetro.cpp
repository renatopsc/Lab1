/**
 * @file	main.cpp
 * @brief	Codigo fonte com a funçao principal do projeto
 * @author	Wanderson Alves de Oliveira (wanderson.alves@live.com)
 */

#include <iostream>
#include "../include/geometrica/perimetro.h"
#define PI 3.14

/**
* @brief Funcao que Calcula Perimetro do Triangulo
* @param medida do lado 
* @return Perimetro do Triangulo
*/

float PerimetroTriangulo(float lado1, float lado2, float lado3){
   float Perimetro;
   Perimetro = lado1 + lado2 + lado3;
   return Perimetro;
}

/**
* @brief Funcao que Calcula Perimetro do Retangulo
* @param medida da base
* @param medida da altura
* @return Perimetro do Retangulo
*/

float PerimetroRetangulo(float base, float altura){
   float Perimetro;
   Perimetro = (base + altura) * 2;
   return Perimetro;
}

/**
* @brief Funcao que Calcula Perimetro do Quadrado
* @param medida do lado
* @return Perimetro do Quadrado
*/

float PerimetroQuadrado(float lado){
   float Perimetro;
   Perimetro = 4 * lado; 
   return Perimetro;
}

/**
* @brief Funcao que Calcula Perimetro da Esfera
* @param medida do raio
* @return Perimetro da Esfera
*/

float PerimetroEsfera(float raio){
   float Perimetro;
   Perimetro = 2 * raio * PI; 
   return Perimetro;
}
