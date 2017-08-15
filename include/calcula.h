#ifndef CALCULA_H
#define CALCULA_H 

#include <iostream>
#include "area.h"
#include "perimetro.h"
#include "volume.h"

using std::cout;
using std::cin;
using std::endl;

void calcAreaTriangulo(float base, float altura);
void calcAreaRetangulo(float base, float altura);
void calcAreaQuadrado(float lado);
void calcAreaCirculo(float raio);
void calcAreaPiramide(float base, float altura);
void calcAreaCubo(float aresta);
void calcAreaParalelepipedo(float aresta1, float aresta2, float aresta3);
void calcAreaEsfera(float raio);

void calcPerimetroTriangulo(float lado1, float lado2, float lado3);
void calcPerimetroRetangulo(float base, float altura);
void calcPerimetroQuadrado(float lado);
void calcPerimetroEsfera(float raio);

void calcVolumeCubo(float lado);
void calcVolumePiramide(float ab, float altura);
void calcVolumeParalelepipedo(float aresta1, float aresta2, float aresta3);
void calcVolumeEsfera(float raio);

#endif
