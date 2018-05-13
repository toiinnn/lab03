/*
 *@file esfera.cpp
 *@brief arquivo de implementacao das metodas da objeto esfera
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#include "esfera.h"

/**
 *@brief Construtor padrao
 */
Esfera::Esfera(){}
/**
 *@brief Destrutor padrao
 */
Esfera::~Esfera(){}

/**
 *@brief Funcao que calcula a area da esfera
 *@param[float] raio raio da esfera
 *@return retorna a area da esfera
 */
float 
Esfera::calcular_area_esfera(float raio){
	m_raio = raio;
	return 4 * PI * pow(m_raio,2);
}

/**
 *@brief Funcao que calcula o volume da esfera
 *@param[float] raio raio da esfera
 *@return retorna o volume da esfera
 */
float 
Esfera::calcular_volume_esfera(float raio){
	m_raio = raio;
	return 4 * 3.1415 * pow(m_raio,3) / 3;
}

/**
 *@brief Funcao que mostra a area da esfera
 *@param[float] raio raio da esfera
 *@return nao possui retorno
 */
void
Esfera::mostrar_area_esfera(float raio){
	m_raio = raio;
    cout << "Área da esfera: " << calcular_area_esfera(m_raio) << endl;
}

/**
 *@brief Funcao que mostra o volume da esfera
 *@param[float] raio raio da esfera
 *@return nao possui retorno
 */
void
Esfera::mostrar_volume_esfera(float raio){
	m_raio = raio;
    cout << "Volume da esfera: " << calcular_volume_esfera(m_raio) << endl;
}

/**
 *@brief Metoda acessor para pegar a area da esfera
 *@param[] nao possui parametros
 *@return o raio da esfera
 */
float 
Esfera::get_raio(){
	return m_raio;
}

/**
 *@brief Metoda acessor para alterar a area da esfera
 *@param[float] raio raio da esfera
 *@return nao possui retorno
 */
void 
Esfera::set_raio(float raio){
	m_raio = raio;
}
