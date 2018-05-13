/*
 *@file parse.cpp
 *@brief arquivo de implementacao da calculadora geometrica 
 *@author Antonio Marcos de Oliveira
 *@since 18/04/1997
 *@date 21/04/1997
 */
#include "parse.h"

/**
 *@brief Construtor padrao
 */
Parse::Parse(){}
/**
 *@brief Destrutor padrao
 */
Parse::~Parse(){}

/**
 *@brief Funcao que recebe os parametros e eh a interacao com o usuario
 *@details Dependendo de quais e quantos argumentos forem recebidos na linha de comando, o programa
 * irá entrar em alguma condição e executar aquele bloco
 *@param[int] argc numero de argumentos passados na linha de comando
 *@param[char*] argv vetor de char que armazena os argumentos passados na linha de comando 
 *@return nao possui retorno
 */
void 
Parse::parse_geometria(int argc, const char *argv[] = nullptr)
{   /** @brief bloco condicional para lançar a mensagem caso o programa seja executado sem parametros*/
    if(argc == 1){
        cerr << "Ops! Você executou o programa sem parâmetros. Por favor verifique e tente novamente." << endl
                 << "Suas opções são: triângulo com 3 valores, quadrado com 1, círculo com 1, cubo com 1, esfera com 1, " << endl   
                 << "paralelepípedo com 3, prirâmide com 3 e retângulo com 2." << endl
                 << "Exemplo: ./geometria triangulo 5 6 8" << endl; 
    }
    else{
        /** @brief String para guardar o segundo argumento recebibo e saber qual forma geometrica sera calculada */ 
        std::string forma_geometrica; 

        forma_geometrica = argv[1];
        /** @brief bloco condicional para calcular as formas geometricas ou lancar a exceção caso o programa seja
         *         caso seja executado sem os parametros corretos*/
        if(argc == 5 && forma_geometrica == "triangulo")
        {
            triangulo.set_base(atof(argv[2]));
            triangulo.set_altura(atof(argv[3]));
            triangulo.set_lado(atof(argv[4]));

            triangulo.mostrar_area_triangulo(triangulo.get_altura(), triangulo.get_base());
            triangulo.mostrar_perimetro_triangulo(triangulo.get_lado());
        }
        else if(argc == 3 && forma_geometrica == "quadrado"){
            quadrado.set_lado(atof(argv[2]));
            quadrado.mostrar_area_quadrado(quadrado.get_lado());  
            quadrado.mostrar_perimetro_quadrado(quadrado.get_lado()); 
        }
        else if(argc == 3 && forma_geometrica == "circulo"){
            circulo.set_raio(atof(argv[2]));
            circulo.mostrar_area_circulo(circulo.get_raio());
            circulo.mostrar_perimetro_circulo(circulo.get_raio());
        }
        else if(argc == 3 && forma_geometrica == "cubo"){
            cubo.set_aresta(atof(argv[2]));
            cubo.mostrar_area_cubo(cubo.get_aresta());
            cubo.mostrar_volume_cubo(cubo.get_aresta());
        }
        else if(argc == 3 && forma_geometrica == "esfera"){
            esfera.set_raio(atof(argv[2]));
            esfera.mostrar_area_esfera(esfera.get_raio());
            esfera.mostrar_volume_esfera(esfera.get_raio());
        }
        else if(argc == 5 && forma_geometrica == "paralelepipedo"){
            paralelepipedo.set_aresta1(atof(argv[2]));
            paralelepipedo.set_aresta2(atof(argv[3]));
            paralelepipedo.set_aresta3(atof(argv[4]));
            paralelepipedo.mostrar_area_paralelepipedo(paralelepipedo.get_aresta1(), paralelepipedo.get_aresta2(), paralelepipedo.get_aresta3());
            paralelepipedo.mostrar_volume_paralelepipedo(paralelepipedo.get_aresta1(), paralelepipedo.get_aresta2(), paralelepipedo.get_aresta3());
        }
        else if(argc == 5 && forma_geometrica == "piramide"){
            piramide.set_area_base(atof(argv[2]));
            piramide.set_area_lateral(atof(argv[3]));
            piramide.set_altura(atof(argv[4]));
            piramide.mostrar_area_piramide(piramide.get_area_base(), piramide.get_area_lateral());
            piramide.mostrar_volume_piramide(piramide.get_area_base(), piramide.get_altura());
        }
        else if(argc == 4  && forma_geometrica == "retangulo"){
            retangulo.set_base(atof(argv[2]));
            retangulo.set_altura(atof(argv[3]));
            retangulo.mostrar_area_retangulo(retangulo.get_base(), retangulo.get_altura());
            retangulo.mostrar_perimetro_retangulo(retangulo.get_base(), retangulo.get_altura());
        }
        else {
            cerr << "Você digitou uma opção inválida! Por favor verifique a figura e os parâmetros e tente novamente." << endl;
        }
    }   
}