#ifndef _LOJA_H_
#define _LOJA_H_

#include "bebida.h"
#include "fruta.h"
#include "roupa.h"

class Loja
{
private:
	vector<shared_ptr<Produto>> mostruario;

public:
	Loja();
	~Loja();
	void loja(fstream produtos_);

	vector<shared_ptr<Produto>> get_produto();
	void add_produto(shared_ptr<Produto> p);
	void mostrar_produto();
	shared_ptr<Produto> procurar_produto(string cod_barras_);
	
};

#endif