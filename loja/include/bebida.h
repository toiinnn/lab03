#ifndef _BEBIDA_H_
#define _BEBIDA_H_

#include "produto.h"

class Bebida : public Produto
{
public:
	Bebida();
	Bebida(string _codigo, string _descricao, short _preco, 
		  float _teor_alcoolico);
	~Bebida();
private:
	float m_teor_alcoolico;
public:
	// getters
	float get_teor_alcoolico();
	// setters
	void set_teor_alcoolico(float teor_alcoolico_);
private:
	ostream& print(ostream &o) const;
	istream& print(istream &i) const;
};

#endif