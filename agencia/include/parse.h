/*
 *@file parse.h
 *@brief arquivo de cabecalho do parse
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#ifndef __PARSE_H__
#define __PARSE_H__

#include "triangulo.h"
#include "circulo.h"
#include "quadrado.h"
#include "retangulo.h"
#include "esfera.h"
#include "piramide.h"
#include "paralelepipedo.h"
#include "cubo.h"

using std::cerr;

class Parse
{
private:
	Triangulo triangulo;
	Circulo circulo;
	Quadrado quadrado;
	Retangulo retangulo;
	Esfera esfera;
	Piramide piramide;
	Paralelepipedo paralelepipedo;
	Cubo cubo;
public:
	Parse();
	~Parse();

	void parse_geometria(int argc, const char *argv[]);	
};



#endif /*__PARSE_H__*/