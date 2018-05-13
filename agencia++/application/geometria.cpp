/*
 *@file geometria.cpp
 *@brief arquivo de cabecalho do objeto circulo
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 *@brief Calculadora geometrica
 *@details Essa aplicacao tem a funcao de calcular as formas geometricas especiais e planas, 
 *de acordo com os parametros de cada uma
*/
#include "parse.h"

int main(int argc, char const *argv[])
{
	Parse p; /** <instancia o objeto calculadora*/

	/**
	 *@brief Funcao que executa a calculadora
	 *@param[in] argc numero de argumentos passados
	 *@param[in] argv vetor de char com os argumentos passados
	 *@return Como eh void, nao tem retorno
	 */
	p.parse_geometria(argc, argv);

	return 0;
}
