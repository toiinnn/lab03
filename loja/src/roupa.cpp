#include <iomanip>
#include "roupa.h"

Roupa::Roupa() {}

Roupa::Roupa(std::string _codigo, std::string _descricao, short _preco, 
	std::string _marca, std::string _sexo, std::string _tamanho):
	Produto(_codigo, _descricao, _preco), m_marca(_marca), m_sexo(_sexo), m_tamanho(_tamanho) {}

Roupa::~Roupa() {}


std::string
Roupa::get_marca(){
	return m_marca;
}

std::string
Roupa::get_sexo(){
	return m_sexo;
}

std::string
Roupa::get_tamanho(){
	return m_tamanho;
}

void
Roupa::set_marca(std::string _marca){
	m_marca = _marca;
}
void 
Roupa::set_sexo(std::string _sexo){
	m_sexo = _sexo;
}

void 
Roupa::set_tamanho(std::string _tamanho){
	m_tamanho = _tamanho;
}
 
std::ostream& 
Roupa::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill ('.') << std::setw (15) << m_marca << " | " 
		<< std::setfill (' ') << std::setw (1) << m_sexo << " | " 
		<< std::setfill (' ') << std::setw (2) << m_tamanho;
	return o;
}
