/*
 *@file parelelepipedo.cpp
 *@brief arquivo de implementacao dos metodos do objeto paralelepipedo
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#include "paralelepipedo.h"

/**
 *@brief Construtor padrao
 */
Paralelepipedo::Paralelepipedo(){}
/**
 *@brief Destrutor padrao
 */
Paralelepipedo::~Paralelepipedo(){}

/**
 *@brief Funcao que calcula a area do paralelepipedo
 *@param[float] aresta1 primeira aresta do paralelepipedo
 *@param[float] aresta2 segunda aresta do paralelepipedo
 *@param[float] aresta3 terceira aresta do paralelepipedo
 *@return retorna a area do paralelepipedo
 */
float 
Paralelepipedo::calcular_area_paralelepipedo(float aresta1, float aresta2, float aresta3){
	m_aresta1 = aresta1;
	m_aresta2 = aresta2;
	m_aresta3 = aresta3;
	return (2 * m_aresta1 * m_aresta2) + (2 * m_aresta1 * m_aresta3) + (2 * m_aresta2 * m_aresta3);
}

/**
 *@brief Funcao que calcula o volume do paralelepipedo
 *@param[float] aresta1 primeira aresta do paralelepipedo
 *@param[float] aresta2 segunda aresta do paralelepipedo
 *@param[float] aresta3 terceira aresta do paralelepipedo
 *@return retorna o volume do paralelepipedo
 */
float 
Paralelepipedo::calcular_volume_paralelepipedo(float aresta1, float aresta2, float aresta3){
	m_aresta1 = aresta1;
	m_aresta2 = aresta2;
	m_aresta3 = aresta3;
	return m_aresta1 * m_aresta2 * m_aresta3;
}

/**
 *@brief Funcao que mostra a area do paralelepipedo
 *@param[float] aresta1 primeira aresta do paralelepipedo
 *@param[float] aresta2 segunda aresta do paralelepipedo
 *@param[float] aresta3 terceira aresta do paralelepipedo
 *@return nao possui retorno
 */
void 
Paralelepipedo::mostrar_area_paralelepipedo(float aresta1, float aresta2, float aresta3){
	m_aresta1 = aresta1;
	m_aresta2 = aresta2;
	m_aresta3 = aresta3;
    cout << "Área do paralelepípedo: " << calcular_area_paralelepipedo(m_aresta1, m_aresta2, m_aresta3) << endl;
}

/**
 *@brief Funcao que mostra o volume do paralelepipedo
 *@param[float] aresta1 primeira aresta do paralelepipedo
 *@param[float] aresta2 segunda aresta do paralelepipedo
 *@param[float] aresta3 terceira aresta do paralelepipedo
 *@return nao possui retorno
 */
void
Paralelepipedo::mostrar_volume_paralelepipedo(float aresta1, float aresta2, float aresta3){
	m_aresta1 = aresta1;
	m_aresta2 = aresta2;
	m_aresta3 = aresta3;
    cout << "Volume do paralelepípedo: " << calcular_volume_paralelepipedo(m_aresta1, m_aresta2, m_aresta3) << endl;
}

/**
 *@brief Metodo acessor para pegar a area do paralelepipedo
 *@param[] nao possui parametros
 *@return a primeira aresta do paralelepipedo
 */
float 
Paralelepipedo::get_aresta1(){
	return m_aresta1;
}

/**
 *@brief Metodo acessor para alterar a area do paralelepipedo
 *@param[float] aresta primeira aresta do paralelepipedo
 *@return nao possui retorno
 */
void
Paralelepipedo::set_aresta1(float aresta1){
	m_aresta1 = aresta1;
}

/**
 *@brief Metodo acessor para pegar a area do paralelepipedo
 *@param[] nao possui parametros
 *@return a segunda aresta do paralelepipedo
 */
float 
Paralelepipedo::get_aresta2(){
	return m_aresta2;
}

/**
 *@brief Metodo acessor para alterar a area do paralelepipedo
 *@param[float] aresta segunda aresta do paralelepipedo
 *@return nao possui retorno
 */
void 
Paralelepipedo::set_aresta2(float aresta2){
	m_aresta2 = aresta2;
}

/**
 *@brief Metodo acessor para pegar a area do paralelepipedo
 *@param[] nao possui parametros
 *@return a terceira aresta do paralelepipedo
 */
float 
Paralelepipedo::get_aresta3(){
	return m_aresta3;
}

/**
 *@brief Metodo acessor para alterar a area do paralelepipedo
 *@param[float] aresta terceira aresta do paralelepipedo
 *@return nao possui retorno
 */
void
Paralelepipedo::set_aresta3(float aresta3){
	m_aresta3 = aresta3;
}