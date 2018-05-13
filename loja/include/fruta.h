#ifndef _FRUTA_H_
#define _FRUTA_H_

#include "produto.h"

class Fruta : public Produto
{
public:
	Fruta();
	Fruta(string _codigo, string _descricao, short _preco, 
		  string _data, double _validade);
	~Fruta();
private:
	string m_data_lote;
	double m_validade;
public:
	// getters
	string getDataLote();
	double getValidade();
	// setters
	void setDataLote(string _data);
	void setValidade(double _validade);
private:
	ostream& print(ostream &o) const;
};

#endif