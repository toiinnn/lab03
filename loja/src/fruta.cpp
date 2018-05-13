#include "fruta.h"

Fruta::Fruta() {}

Fruta::Fruta(string _codigo, string _descricao, short _preco, 
	string _data, double _validade):
	Produto(_codigo, _descricao, _preco), m_data_lote(_data), m_validade(_validade) {}

Fruta::~Fruta() {}

string 
Fruta::getDataLote() {
	return m_data_lote;
}

double 
Fruta::getValidade() {
	return m_validade;
}

void 
Fruta::setDataLote(string _data) {
	m_data_lote = _data;
}

void 
Fruta::setValidade(double _validade) {
	m_validade = _validade;
}
 
ostream& 
Fruta::print(ostream &o) const {
	o << setfill (' ') << setw (10) << m_cod_barras << " | " 
		<< setfill ('.') << setw (20) << m_descricao << " | " 
		<< setfill (' ') << setw (5) << setprecision(5) << m_preco << " | "
		<< setfill (' ') << setw (10) << m_data_lote << " | " 
		<< setfill (' ') << setw (3) << m_validade;
	return o;
}
