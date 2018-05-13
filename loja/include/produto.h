#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::ostream;
using std::istream;
using std::setw;
using std::setfill;
using std::setprecision;


class Produto
{
public:
	Produto();
	Produto(string _codigo, string _descricao, short _preco);
	virtual ~Produto();
protected:
	string m_cod_barras;
	string m_descricao;
	short m_preco;		
public:
	// getters
	string getCodBarras();
	string getDescricao();
	short getPreco();
	// setters
	void setCodBarras(string _codigo);
	void setDescricao(string _descricao);
	void setPreco(short _preco);
	
	friend ostream& operator<< (ostream &o, Produto const &t);
private:
	virtual ostream& print(ostream&) const = 0;
};
 
#endif
