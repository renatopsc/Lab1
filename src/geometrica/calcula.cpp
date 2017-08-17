/**
 *@file		calcula.cpp	
 *@brief	Arquivo contendo as chamadas das funções para o calculo da area das figuras geometricas
 *@author	Wanderson Alves de Oliveira
 *@since	13.08.2017
 *@data		15.08.2017
 *@sa		Wanderson wanderson.alves@live.com
 */

#include "../include/geometrica/calcula.h"
#include "../include/geometrica/area.h"
#include "../include/geometrica/perimetro.h"
#include "../include/geometrica/volume.h"

/**
 *@brief 	Chamada ao cálculo da área do triângulo
 *@details	Função que faz a chamada da função que calcula a área do triângulo, e 
 *			exibe o valor na tela. 
 */
void calcAreaTriangulo(float base, float altura) {
	cout << "A area do triangulo: " << AreaTriangulo(base, altura) << endl;
}

/**
 *@brief 	Chamada ao cálculo da área do retangulo
 *@details	Função que faz a chamada da função que calcula a área do retangulo, e 
 *			exibe o valor na tela. 
 */
void calcAreaRetangulo(float base, float altura) {
	cout << "A area do retangulo: " << AreaRetangulo(base, altura) << endl;
}

/**
 *@brief 	Chamada ao cálculo da área do quadrado
 *@details	Função que faz a chamada da função que calcula a área do quadrado, e 
 *			exibe o valor na tela. 
 */
void calcAreaQuadrado(float lado) {
	cout << "A area do quadrado: " << AreaQuadrado(lado) << endl;
}

/**
 *@brief 	Chamada ao cálculo da área do círculo
 *@details	Função que faz a chamada da função que calcula a área do círculo, e 
 *			exibe o valor na tela. 
 */
void calcAreaCirculo(float raio) {
	cout << "A area do circulo: " << AreaCirculo(raio) << endl;
}

/**
 *@brief 	Chamada ao cálculo da área do pirâmide
 *@details	Função que faz a chamada da função que calcula a área do pirâmide, e 
 *			exibe o valor na tela. 
 */
void calcAreaPiramide(float base, float altura) {
	cout << "A area da piramide: " << AreaPiramide(base, altura) << endl;
}

/**
 *@brief 	Chamada ao cálculo da área do cubo
 *@details	Função que faz a chamada da função que calcula a área do cubo, e 
 *			exibe o valor na tela. 
 */
void calcAreaCubo(float aresta) {
	cout << "A area do cubo: " << AreaCubo(aresta) << endl;
}

/**
 *@brief 	Chamada ao cálculo da área do paralelepípedo
 *@details	Função que faz a chamada da função que calcula a área do paralelepípedo, e 
 *			exibe o valor na tela. 
 */
void calcAreaParalelepipedo(float aresta1, float aresta2, float aresta3) {
	cout << "A area do paralelepipedo: " << AreaParalelepipedo(aresta1, aresta2, aresta3) << endl;
}

/**
 *@brief 	Chamada ao cálculo da área do esfera
 *@details	Função que faz a chamada da função que calcula a área do esfera, e 
 *			exibe o valor na tela. 
 */
void calcAreaEsfera(float raio) {
	cout << "A area da esfera: " << AreaEsfera(raio) << endl;
}

/**
 *@brief 	Chamada ao cálculo do perímetro do triângulo
 *@details	Função que faz a chamada da função que calcula o perímetro do triângulo, e 
 *			exibe o valor na tela. 
 */
void calcPerimetroTriangulo(float lado1, float lado2, float lado3){
	cout << "O perimetro do triangulo: " << PerimetroTriangulo(lado1, lado2, lado3) << endl;
}

/**
 *@brief 	Chamada ao cálculo do perímetro do retangulo
 *@details	Função que faz a chamada da função que calcula o perímetro do retangulo, e 
 *			exibe o valor na tela. 
 */
void calcPerimetroRetangulo(float base, float altura){
	cout << "O perimetro do retangulo: " << PerimetroRetangulo(base, altura) << endl;
}

/**
 *@brief 	Chamada ao cálculo do perímetro do quadrado
 *@details	Função que faz a chamada da função que calcula o perímetro do quadrado, e 
 *			exibe o valor na tela. 
 */
void calcPerimetroQuadrado(float lado) {
	cout << "O perimetro do quadrado: " << PerimetroQuadrado(lado) << endl;
}

/**
 *@brief 	Chamada ao cálculo do perímetro do círculo
 *@details	Função que faz a chamada da função que calcula o perímetro do círculo, e 
 *			exibe o valor na tela. 
 */
void calcPerimetroEsfera(float raio) {
	cout << "O perimetro do circulo: " << PerimetroEsfera(raio) << endl;
}

/**
 *@brief 	Chamada ao cálculo do volume do pirâmide
 *@details	Função que faz a chamada da função que calcula o volume do pirâmide, e 
 *			exibe o valor na tela. 
 */
void calcVolumePiramide(float ab, float altura) {
	cout << "O volume da piramide: " << VolumePiramide(ab, altura) << endl;
}

/**
 *@brief 	Chamada ao cálculo do volume do cubo
 *@details	Função que faz a chamada da função que calcula o volume do cubo, e 
 *			exibe o valor na tela. 
 */
void calcVolumeCubo(float lado) {
	cout << "O volume do cubo: " << VolumeCubo(lado) << endl;
}

/**
 *@brief 	Chamada ao cálculo do volume do paralelepípedo
 *@details	Função que faz a chamada da função que calcula o volume do paralelepípedo, e 
 *			exibe o valor na tela. 
 */
void calcVolumeParalelepipedo(float aresta1, float aresta2, float aresta3) {
	cout << "O volume do paralalepipedo: " << VolumeParalelepipedo(aresta1, aresta2, aresta3) << endl;
}

/**
 *@brief 	Chamada ao cálculo do volume do esfera
 *@details	Função que faz a chamada da função que calcula o volume do esfera, e 
 *			exibe o valor na tela. 
 */
void calcVolumeEsfera(float raio) {
	cout << "O volume da esfera: " << VolumeEsfera(raio) << endl;
}
