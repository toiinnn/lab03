/*
 *@file triangulo.cpp
 *@brief arquivo de implementacao dos metodos do objeto triangulo
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#include "triangulo.h"

/**
 *@brief Construtor padrao
 */
Triangulo::Triangulo(){}
/**
 *@brief Destrutor padrao
 */
Triangulo::~Triangulo(){}

/**
 *@brief Funcao que calcula a area do triangulo
 *@param[float] base base do triangulo
 *@param[float] altua altura do triangulo
 *@return retorna a area do triangulo
 */
float 
Triangulo::calcular_area_triangulo(float base, float altura){
	m_base = base;
	m_altura = altura;
	return (m_base * m_altura) / 2;
}

/**
 *@brief Funcao que calcula o perimetro do triangulo
 *@param[float] lado lado do triangulo
 *@return retorna o perimetro do triangulo
 */
float 
Triangulo::calcular_perimetro_triangulo(float lado){
	m_lado = lado;
	return 3 * m_lado;
}

/**
 *@brief Funcao que mostra a area do triangulo
 *@param[float] base base do triangulo
 *@param[float] altua altura do triangulo
 *@return nao possui retorno
 */
void 
Triangulo::mostrar_area_triangulo(float base, float altura){
	m_base = base;
	m_altura = altura;
    cout << "Área do triângulo: " << calcular_area_triangulo(m_base, m_altura) << endl;
}

/**
 *@brief Funcao que mostra o perimetro do triangulo
 *@param[float] lado lado do triangulo
 *@return nao possui retorno
 */
void
Triangulo::mostrar_perimetro_triangulo(float lado){
	m_lado = lado;
    cout << "Perímetro do triângulo: " << calcular_perimetro_triangulo(m_lado) << endl;
}

/**
 *@brief Metodo acessor para pegar a base do triangulo
 *@param[] nao possui parametros
 *@return a base do triangulo
 */
float 
Triangulo::get_base(){
	return m_base;
}

/**
 *@brief Metodo acessor para alterar a base do triangulo
 *@param[float] base base do triangulo
 *@return nao possui retorno
 */
void 
Triangulo::set_base(float base){
	m_base = base;
}

/**
 *@brief Metodo acessor para pegar a altura do triangulo
 *@param[] nao possui parametros
 *@return a altura do triangulo
 */
float 
Triangulo::get_altura(){
	return m_altura;
}

/**
 *@brief Metodo acessor para alterar a altura do triangulo
 *@param[float] altura altura do triangulo
 *@return nao possui retorno
 */
void
Triangulo::set_altura(float altura){
	m_altura = altura;
}

/**
 *@brief Metodo acessor para pegar o lado do triangulo
 *@param[] nao possui parametros
 *@return o lado do triangulo
 */
float
Triangulo::get_lado(){
	return m_lado;
}

/**
 *@brief Metodo acessor para alterar o lado do triangulo
 *@param[float] lado lado do triangulo
 *@return nao possui retorno
 */
void 
Triangulo::set_lado(float lado){
	m_lado = lado;
}


