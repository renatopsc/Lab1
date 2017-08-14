/**
* @file area.cpp
* @brief programa que Calcula Areas de figuras geometricas
* @author Wanderson A. de Oliveira 
* @date 09/03/2017
*/

#include<iostream>
#include"area.h"
#define PI 3.14

using namespace std;

/**
* @brief Funcao que Calcula Area do Triangulo
* @param medida da base do Triangulo
* @param medida da altura do Triangulo
* @return area do Triangulo
*/

float AreaTriangulo(float base, float altura){
   float area;
   area = (base * altura)/2;
   return area;
}

/**
* @brief Funcao que Calcula Area do Retangulo
* @param medida da base do Retangulo
* @param medida da altura do Retangulo
* @return area do Retangulo
*/ 

float AreaRetangulo(float base, float altura){
   float area; 
   area = base * altura;
   return area;
}

/**
* @brief Funcao que Calcula Area do Quadrado
* @param medida do lado do Quadrado
* @return area do Quadrado
*/

float AreaQuadrado(float lado){
   float area;
   area = lado * lado;
   return area;
}

/**
* @brief Funcao que Calcula Area do Circulo
* @param medida do raio do Circulo
* @return area do Circulo
*/

float AreaCirculo(float raio){
   float area;
   area = PI * raio * raio; 
   return area;
}

/**
* @brief Funcao que Calcula Area da Piramide
* @param medida da area da base da Piramide
* @param medida da area lateral da Piramide
* @return area da Piramide
*/

float AreaPiramide(float ab, float al){
   float area;
   area = ab + al;
   return area;
}

/**
* @brief Funcao que Calcula Area do Cubo
* @param medida da aresta do Cubo
* @return area do Cubo
*/

float AreaCubo(float aresta){
   float area;
   area = 6 * aresta * aresta;
   return area;
}

/**
* @brief Funcao que Calcula Area do Paralelepipedo
* @param medida da aresta do Paralelepipedo
* @return area do Paralelepipedo
*/

float AreaParalelepipedo(float aresta1, float aresta2, float aresta3){
   float area;
   area = (2 * aresta1 * aresta2) +
	  (2 * aresta1 * aresta3) +
          (2 * aresta2 * aresta3);  
   return area;
}

/**
* @brief Funcao que Calcula Area da Esfera
* @param medida do raio da Esfera
* @return area da Esfera
*/

float AreaEsfera(float raio){
   float area;
   area = 4 * PI * raio * raio;
   return area;
}
