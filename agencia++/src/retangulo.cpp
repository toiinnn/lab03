/*
 *@file retangulo.cpp
 *@brief arquivo de implementacao dos metodos do objeto retangulo
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#include "retangulo.h"

/**
 *@brief Construtor padrao
 */
Retangulo::Retangulo(){}
/**
 *@brief Destrutor padrao
 */
Retangulo::~Retangulo(){}

/**
 *@brief Funcao que calcula a area do retangulo
 *@param[float] base base do retangulo
 *@param[float] altura altura do retangulo
 *@return retorna a area do retangulo
 */
float 
Retangulo::calcular_area_retangulo(float base, float altura){
	m_base = base;
	m_altura = altura;
	return (m_base * m_altura);
}

/**
 *@brief Funcao que calcula o perimetro do retangulo
 *@param[float] base base do retangulo
 *@param[float] altura altura do retangulo
 *@return retorna o perimetro do retangulo
 */
float 
Retangulo::calcular_perimetro_retangulo(float base, float altura){
	m_base = base;
	m_altura = altura;
	return 2 * (m_base + m_altura);
}

/**
 *@brief Funcao que mostra a area do retangulo
 *@param[float] base base do retangulo
 *@param[float] altura altura do retangulo
 *@return nao possui retorno
 */
void 
Retangulo::mostrar_area_retangulo(float base, float altura){
	m_base = base;
	m_altura = altura;
    cout << "Área do retângulo: " << calcular_area_retangulo(m_base, m_altura) << endl;
}

/**
 *@brief Funcao que mostra o perimetro do retangulo
 *@param[float] base base do retangulo
 *@param[float] altura altura do retangulo
 *@return nao possui retorno
 */
void
Retangulo::mostrar_perimetro_retangulo(float base, float altura){
	m_base = base;
	m_altura = altura;
    cout << "Perímetro do retângulo: " << calcular_perimetro_retangulo(m_base, m_altura) << endl;
}

/**
 *@brief Metodo acessor para pegar a base do retangulo
 *@param[] nao possui parametros
 *@return a base do retangulo
 */
float 
Retangulo::get_base(){
	return m_base;
}

/**
 *@brief Metodo acessor para alterar a base do retangulo
 *@param[float] base base do retangulo
 *@return nao possui retorno
 */
void 
Retangulo::set_base(float base){
	m_base = base;
}

/**
 *@brief Metodo acessor para pegar a altura do retangulo
 *@param[] nao possui parametros
 *@return a altura do retangulo
 */
float 
Retangulo::get_altura(){
	return m_altura;
}

/**
 *@brief Metodo acessor para alterar a altura do retangulo
 *@param[float] altura altura do retangulo
 *@return nao possui retorno
 */
void
Retangulo::set_altura(float altura){
	m_altura = altura;
}