/*
 *@file cubo.cpp
 *@brief arquivo de implementacao dos metodos do objeto cubo
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#include "cubo.h"

/**
 *@brief Construtor padrao
 */
Cubo::Cubo(){}
/**
 *@brief Destrutor padrao
 */
Cubo::~Cubo(){}

/**
 *@brief Funcao que calcula a area do cubo
 *@param[float] aresta aresta do cubo
 *@return retorna a area do cubo
 */
float 
Cubo::calcular_area_cubo(float aresta){
	m_aresta = aresta;
	return 6 * pow(m_aresta,2);
}

/**
 *@brief Funcao que calcula o volume do cubo
 *@param[float] aresta aresta do cubo
 *@return retorna o volume do cubo
 */
float 
Cubo::calcular_volume_cubo(float aresta){
	m_aresta = aresta;
	return pow(m_aresta,3);
}

/**
 *@brief Funcao que mostra a area do cubo
 *@param[float] aresta aresta do cubo
 *@return nao possui retorno
 */
void 
Cubo::mostrar_area_cubo(float aresta){
	m_aresta = aresta;
    cout << "Área do cubo: " << calcular_area_cubo(m_aresta) << endl;
}

/**
 *@brief Funcao que mostra o volume do cubo
 *@param[float] aresta aresta do cubo
 *@return nao possui retorno
 */
void 
Cubo::mostrar_volume_cubo(float aresta){
	m_aresta = aresta;
    cout << "Volume do cubo: " << calcular_volume_cubo(m_aresta) << endl;
}

/**
 *@brief Metodo acessor para pegar a area do cubo
 *@param[] nao possui parametros
 *@return a aresta do cubo
 */
float 
Cubo::get_aresta(){
	return m_aresta;
}

/**
 *@brief Metodo acessor para alterar a area do cubo
 *@param[float] aresta aresta do cubo
 *@return nao possui retorno
 */
void 
Cubo::set_aresta(float aresta){
	m_aresta = aresta;
}	
