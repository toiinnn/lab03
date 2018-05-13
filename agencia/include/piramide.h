/*
 *@file piramide.h
 *@brief arquivo de cabecalho do objeto piramide
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#ifndef PIRAMIDE_H
#define PIRAMIDE_H

#include <iostream>

using std::cout;
using std::endl;

class Piramide
{
private:
	float m_area_base;
	float m_area_lateral;
	float m_altura;
public:
	Piramide();
	~Piramide();

	float calcular_area_piramide(float area_base, float area_lateral);
	float calcular_volume_piramide(float area_base, float altura);

	void mostrar_area_piramide(float area_base, float area_lateral);
	void mostrar_volume_piramide(float area_base, float altura);

	float get_area_base();
	void set_area_base(float area_base);

	float get_area_lateral();
	void set_area_lateral(float area_lateral);

	float get_altura();
	void set_altura(float altura);
};


#endif /*PIRAMIDE_H*/