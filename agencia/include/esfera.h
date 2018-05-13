/*
 *@file esfera.h
 *@brief arquivo de cabecalho do objeto esfera
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#ifndef ESFERA_H
#define ESFERA_H
#define PI 3.1415

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class Esfera
{
private:
	float m_raio;
public:
	Esfera();
	~Esfera();
	
	float calcular_area_esfera(float raio);
	float calcular_volume_esfera(float raio);

	void mostrar_area_esfera(float raio);
	void mostrar_volume_esfera(float raio);

	float get_raio();
	void set_raio(float raio);
};

#endif /*ESFERA_H*/