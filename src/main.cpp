/**
 * @file	main.cpp
 * @brief	Codigo fonte com a funçao principal do projeto
 * @author	Wanderson Alves de Oliveira (wanderson.alves@live.com)
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>
#include "area.h"
#include "perimetro.h"
#include "volume.h"

// declaração da função calculadora
void menu(int opc);

/**
 *@brief 	Função principal
 *@detals	Função para mostrar o menu de opções para o usuário
 */
int main() {
	int opc;
	do{
  		cout << "Calculadora de Geometria Plana e Espacial" << endl;
  		cout << "(1) Triangulo equilatero" << endl;
  		cout << "(2) Retangulo" << endl;
  		cout << "(3) Quadrado" << endl;
  		cout << "(4) Circulo" << endl;
  		cout << "(5) Piramide com base quadricular" << endl;
  		cout << "(6) Cubo" << endl;
  		cout << "(7) Paralelepipedo" << endl;
  		cout << "(8) Esfera" << endl;
  		cout << "(0) Sair" << endl;
		cin >> opc;

 	    while(opc > 9 or opc < 0) {
			cout << "Informe uma opção valida: ";
			cin >> opc;
		}
		menu(opc);
	   }while(opc != 0);
}

void menu(int opc){
  float base, altura, lado, raio, aresta1, aresta2, aresta3;
      switch (opc){
		case 1:
		  	cout << "Digite o tamanho da base do Triangulo:" << endl;
		 	cin >> base;
		  	cout << "Digite o tamanho da altura do triangulo:" << endl;
		  	cin >> altura;
			AreaTriangulo(base, altura);
		  break;
		case 2:
		  	cout << "Digite o tamanho da base do Retangulo:" << endl;
		  	cin >> base;
		 	cout << "Digite o tamanho da altura do Retangulo:" << endl;
		  	cin >> altura;
		  	AreaRetangulo(base, altura);
		  break;
		case 3:
		  	cout << "Digite o tamanho do lado do Quadrado:" << endl;
		  	cin >> lado;
		  	AreaQuadrado(lado);
		  break;
		case 4:
		  	cout << "Digite o tamanho do raio do Circulo:" << endl;
		  	cin >> raio;
		  	AreaCirculo(raio);
		  break;
		case 5:
		  	cout << "Digite o tamanho da base do Piramide:" << endl;
		  	cin >> base;
		  	cout << "Digite o tamanho da altura do Piramide:" << endl;
		  	cin >> altura;
		  	AreaPiramide(base, altura);
		  break;
		case 6:
		  	cout << "Digite o tamanho da aresta do cubo: " << endl;
		  	cin >> lado;
		  	AreaCubo(lado);
		  break;
		case 7:
		  	cout << "Digite o tamanho da largura do paralelepipedo: " << endl;
		  	cin >> aresta1;
		  	cout << "Digite o tamanho da altura do paralelepipedo: " << endl;
		  	cin >> aresta2;
		  	cout << "Digite o tamanho do comprimento do paralelepipedo: " << endl;
		  	cin >> aresta3;
		  	AreaParalelepipedo(aresta1, aresta2, aresta3);
		  break;
		case 8:
		  	cout << "Digite o tamanho do raio da esfera: " << endl;
		  	cin >> raio;
		  	AreaEsfera(raio);		  
		  break;
		case 0:
			exit(EXIT_SUCCESS);
		default:
			cout << "Valor invalido!" << endl;	
		}
}	
