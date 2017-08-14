/**
* @file volume.cpp
* @brief programa que Calcula Volume de figuras geometricas
* @author Wanderson A. de Oliveira
*/

#include <iostream>
#include <cmath>
#include "volume.h"
#define PI 3.14

/**
* @brief Funcao que Calcula Volume da Piramide 
* @param medida da base da Piramide
* @param medida da altura da Piramide
* @return Volume da Piramide
*/

float VolumePiramide(float ab, float altura){
   float Volume;
   Volume = (ab * altura)/3;
   return Volume;
}

/**
* @brief Funcao que Calcula Volume do Cubo 
* @param medida da aresta
* @return Volume do Cubo
*/

float VolumeCubo(float lado){

	return pow(lado,3);
}

/**
* @brief Funcao que Calcula Volume do Paralelepipedo
* @param medida da aresta
* @return Volume do Paralelepipedo
*/

float VolumeParalelepipedo(float aresta1, float aresta2, float aresta3){
   float Volume;
   Volume = aresta1 * aresta2 * aresta3;
   return Volume;
}

/**
* @brief Funcao que Calcula Volume da Esfera
* @param medida do raio
* @return Volume da Esfera
*/

float VolumeEsfera(float raio){
   float Volume;
   Volume = (4 / 3) * PI * raio * raio * raio;
   return Volume;
}
