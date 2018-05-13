/*
 *@file circulo.cpp
 *@brief arquivo de implementacao dos metodos do objeto circulo
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#include "circulo.h"

/**
 *@brief Construtor padrao
 */
Circulo::Circulo(){}
/**
 *@brief Destrutor padrao
 */
Circulo::~Circulo(){}

/**
 *@brief Funcao que calcula a area do circulo
 *@param[float] raio raio do circulo
 *@return retorna a area do circulo
 */
float 
Circulo::calcular_area_circulo(float raio){
	m_raio = raio;
	return PI * pow(m_raio,2);
}

/**
 *@brief Funcao que calcula o perimetro do circulo
 *@param[float] raio raio do circulo
 *@return retorna o perimetro do circulo
 */
float 
Circulo::calcular_perimetro_circulo(float raio){
	m_raio = raio;
	return 2 * PI * m_raio;
}

/**
 *@brief Funcao que mostra a area do circulo
 *@param[float] raio raio do circulo
 *@return nao possui retorno
 */
void 
Circulo::mostrar_area_circulo(float raio){
	m_raio = raio;
    cout << "Área do círculo: " << calcular_area_circulo(m_raio) << endl;
}

/**
 *@brief Funcao que mostra o perimetro do circulo
 *@param[float] raio raio do circulo
 *@return nao possui retorno
 */
void
Circulo::mostrar_perimetro_circulo(float raio){
	m_raio = raio;
    cout << "Perímetro do círculo: " << calcular_perimetro_circulo(m_raio) << endl;
}

/**
 *@brief Metodo acessor para pegar a area do circulo
 *@param[] nao possui parametros
 *@return o raio do circulo
 */
float 
Circulo::get_raio(){
	return m_raio;
}

/**
 *@brief Metodo acessor para alterar a area do circulo
 *@param[float] raio raio do circulo
 *@return nao possui retorno
 */
void 
Circulo::set_raio(float raio){
	m_raio = raio;
}

