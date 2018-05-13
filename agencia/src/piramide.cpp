/*
 *@file piramide.cpp
 *@brief arquivo de implementacao das metodas da objeto piramide
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#include "piramide.h"

/**
 *@brief Construtor padrao
 */
Piramide::Piramide(){}
/**
 *@brief Destrutor padrao
 */
Piramide::~Piramide(){}

/**
 *@brief Funcao que calcula a area da piramide
 *@param[float] area_base area da base da piramide
 *@param[float] area_lateral area da lateral da piramide
 *@return retorna a area da piramide
 */
float 
Piramide::calcular_area_piramide(float area_base, float area_lateral){
	m_area_base = area_base;
	m_area_lateral = area_lateral;
	return (m_area_base + m_area_lateral);
}

/**
 *@brief Funcao que calcula o volume da piramide
 *@param[float] area_base area da base da piradide
 *@param[float] altura altura da piramide
 *@return retorna o volume da piramide
 */
float 
Piramide::calcular_volume_piramide(float area_base, float altura){
	m_area_base = area_base;
	m_altura = altura;
	return (m_area_base * m_altura) / 3;
}

/**
 *@brief Funcao que mostra a area da piramide
 *@param[float] area_base area da base da piramide
 *@param[float] area_lateral area da lateral da piramide
 *@return nao possui retorno
 */
void 
Piramide::mostrar_area_piramide(float area_base, float area_lateral){
	m_area_base = area_base;
	m_area_lateral = area_lateral;
    cout << "Área da pirâmide: " << calcular_area_piramide(m_area_base, m_area_lateral) << endl;
}

/**
 *@brief Funcao que mostra o volume da piramide
 *@param[float] area_base area da base da piradide
 *@param[float] altura altura da piramide
 *@return nao possui retorno
 */
void
Piramide::mostrar_volume_piramide(float area_base, float altura){
	m_area_base = area_base;
	m_altura = altura;
    cout << "Volume da pirâmide: " << calcular_volume_piramide(m_area_base, m_altura) << endl;
}

/**
 *@brief Metoda acessor para pegar a area da base da piramide
 *@param[] nao possui parametros
 *@return a area_base da piramide
 */
float 
Piramide::get_area_base(){
	return m_area_base;
}

/**
 *@brief Metoda acessor para alterar a area da base da piramide
 *@param[float] area_base area da base da piramide
 *@return nao possui retorno
 */
void 
Piramide::set_area_base(float area_base){
	m_area_base = area_base;
}

/**
 *@brief Metoda acessor para pegar a area lateral da piramide
 *@param[] nao possui parametros
 *@return a area lateral da piramide
 */
float
Piramide::get_area_lateral(){
	return m_area_lateral;
}

/**
 *@brief Metoda acessor para alterar a area da lateral da piramide
 *@param[float] area_lateral area da lateral da piramide
 *@return nao possui retorno
 */
void
Piramide::set_area_lateral(float area_lateral){
	m_area_lateral = area_lateral;
}

/**
 *@brief Metoda acessor para pegar a altura da piramide
 *@param[] nao possui parametros
 *@return a altura da piramide
 */
float 
Piramide::get_altura(){
	return m_altura;
}

/**
 *@brief Metoda acessor para alterar a area da piramide
 *@param[float] altura altura da piramide
 *@return nao possui retorno
 */
void
Piramide::set_altura(float altura){
	m_altura = altura;
}
