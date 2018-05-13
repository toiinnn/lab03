#include <iomanip>
#include "bebida.h"

Bebida::Bebida() {}

Bebida::Bebida(std::string _codigo, std::string _descricao, short _preco, 
	float _teor_alcoolico):
	Produto(_codigo, _descricao, _preco), m_teor_alcoolico(_teor_alcoolico) {}

Bebida::~Bebida() {}

float
Bebida::get_teor_alcoolico(){
	return m_teor_alcoolico;
}

void
Bebida::set_teor_alcoolico(float teor_alcoolico_){
	m_teor_alcoolico = teor_alcoolico_;
}
 
std::ostream& 
Bebida::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (3) << m_teor_alcoolico;
	return o;
}