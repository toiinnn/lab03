/*
 *@file circulo.h
 *@brief arquivo de cabecalho do objeto circulo
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#ifndef CIRCULO_H
#define CIRCULO_H
#define PI 3.1415

#include <cmath>
#include <iostream>

using std::cout;
using std::endl;

class Circulo
{
private:
	float m_raio;
public:
	Circulo();
	~Circulo();

	float calcular_area_circulo(float raio);
	float calcular_perimetro_circulo(float raio);

	void mostrar_area_circulo(float raio);
	void mostrar_perimetro_circulo(float raio);

	float get_raio();
	void set_raio(float raio);
	
};


#endif /*CIRCULO_H*/