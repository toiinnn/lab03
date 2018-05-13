/*
 *@file quadrado.cpp
 *@brief arquivo de implementacao dos metodos do objeto quadrado
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#include "quadrado.h"

/**
 *@brief Construtor padrao
 */
Quadrado::Quadrado(){}
/**
 *@brief Destrutor padrao
 */
Quadrado::~Quadrado(){}

/**
 *@brief Funcao que calcula a area do quadrado
 *@param[float] lado lado do quadrado
 *@return retorna a area do quadrado
 */
float 
Quadrado::calcular_area_quadrado(float lado){
	m_lado = lado;
	return pow(m_lado,2);
}

/**
 *@brief Funcao que calcula o perimetro do quadrado
 *@param[float] lado lado do quadrado
 *@return retorna o perimetro do quadrado
 */
float
Quadrado::calcular_perimetro_quadrado(float lado){
	m_lado = lado;
	return 4 * m_lado;
}

/**
 *@brief Funcao que mostra a area do quadrado
 *@param[float] lado lado do quadrado
 *@return nao possui retorno
 */
void 
Quadrado::mostrar_area_quadrado(float lado){
	m_lado = lado;
    cout << "Área do quadrado: " << calcular_area_quadrado(m_lado) << endl; 
}

/**
 *@brief Funcao que mostra o perimetro do quadrado
 *@param[float] lado lado do quadrado
 *@return nao possui retorno
 */
void
Quadrado::mostrar_perimetro_quadrado(float lado){ 
	m_lado = lado;
    cout << "Perímetro do quadrado: " << calcular_perimetro_quadrado(m_lado) << endl;
}

/**
 *@brief Metodo acessor para pegar a area do quadrado
 *@param[] nao possui parametros
 *@return o lado do quadrado
 */
float 
Quadrado::get_lado(){
	return m_lado;
}

/**
 *@brief Metodo acessor para alterar a area do quadrado
 *@param[float] lado lado do quadrado
 *@return nao possui retorno
 */
void
Quadrado::set_lado(float lado){
	m_lado = lado;
}