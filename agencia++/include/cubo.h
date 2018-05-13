/*
 *@file cubo.h
 *@brief arquivo de cabecalho do objeto cubo
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#ifndef CUBO_H
#define CUBO_H

#include <cmath>
#include <iostream>

using std::cout;
using std::endl;

class Cubo
{
private:
	float m_aresta;
public:
	Cubo();
	~Cubo();

	float calcular_area_cubo(float aresta);
	float calcular_volume_cubo(float aresta);

	void mostrar_area_cubo(float aresta);
	void mostrar_volume_cubo(float aresta);

	float get_aresta();
	void set_aresta(float aresta);	
};

#endif /*CUBO_H*/