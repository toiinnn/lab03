#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>

using std::cout;
using std::endl;

class Retangulo
{
private:
	int m_base;
	int m_altura;
public:
	Retangulo();
	~Retangulo();

	float calcular_area_retangulo(float base, float altura);
	float calcular_perimetro_retangulo(float base, float altura);

	void mostrar_area_retangulo(float base, float altura);
	void mostrar_perimetro_retangulo(float base, float altura);	

	float get_base();
	void set_base(float base);

	float get_altura();
	void set_altura(float altura);
};

#endif /*RETANGULO_H*/