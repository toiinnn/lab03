/*
 *@file quadrado.h
 *@brief arquivo de cabecalho do objeto quadrado
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#ifndef QUADRADO_H
#define QUADRADO_H

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class Quadrado
{
private:
	float m_lado;
public:
	Quadrado();
	~Quadrado();

	float calcular_area_quadrado(float lado);
	float calcular_perimetro_quadrado(float lado);
		
	void mostrar_area_quadrado(float lado);
	void mostrar_perimetro_quadrado(float lado);	

	float get_lado();
	void set_lado(float lado);
};

#endif /*QUADRADO_H*/