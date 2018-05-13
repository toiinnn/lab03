#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>

using std::cout;
using std::endl;

class Triangulo
{
private:
	float m_base;
	float m_lado;
	float m_altura;
public:
	Triangulo();
	~Triangulo();

	float calcular_area_triangulo(float base, float altura);
	float calcular_perimetro_triangulo(float lado);

	void mostrar_area_triangulo(float base, float altura);
	void mostrar_perimetro_triangulo(float lado);
	
	float get_base();
	void set_base(float base);

	float get_lado();
	void set_lado(float lado);

	float get_altura();
	void set_altura(float altura);
	
};

#endif /*TRIANGULO_H*/