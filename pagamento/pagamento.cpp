#include "pagamento.h"
#include <iostream>
#include <string>

Pagamento::Pagamento(int id) :
	idPagamento(id) {}

int Pagamento::getIdPagamento() {
	return idPagamento;
}

void Pagamento::setIdPagamento(int id) {
	idPagamento = id;
}


void Pagamento::exibirPagamento() {
	std::cout << "Exibindo Dados do Pagamento :  /n" << std::endl;
	std::cout << "O Id do Pagamento é :" << this->getIdPagamento() << std::endl;

}