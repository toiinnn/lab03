/*
 *@file paralelepipedo.h
 *@brief arquivo de cabecalho do objeto paralelepipedo
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H

#include <iostream>

using std::cout;
using std::endl;

class Paralelepipedo
{
private:
	float m_aresta1;
	float m_aresta2;
	float m_aresta3;
public:
	Paralelepipedo();
	~Paralelepipedo();

	float calcular_area_paralelepipedo(float aresta1, float aresta2, float aresta3);
	float calcular_volume_paralelepipedo(float aresta1, float aresta2, float aresta3);

	void mostrar_area_paralelepipedo(float aresta1, float aresta2, float aresta3);
	void mostrar_volume_paralelepipedo(float aresta1, float aresta2, float aresta3);

	float get_aresta1();
	void set_aresta1(float aresta1);

	float get_aresta2();
	void set_aresta2(float aresta2);

	float get_aresta3();
	void set_aresta3(float aresta3);
};

#endif /*PARALELEPIPEDO_H*/