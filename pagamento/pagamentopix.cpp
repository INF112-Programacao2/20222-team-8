#include <iostream>
#include <string>
#include "pagamentopix.h"

PagamentoPix::PagamentoPix(int chave, int id) :
	chavePix(chave) , Pagamento(id) {}

int PagamentoPix::getChavePix() {
	return chavePix;
}

void PagamentoPix::setChavePix(int chave) {
	chavePix = chave;
}
void PagamentoPix::getChavePix() {
	std::cout << "Exibindo Dados do Pagamento :  /n" << std::endl;
	std::cout << "O Id do Pagamento é :" << this->getIdPagamento() << std::endl;
	std::cout << "A chave Pix para pagamento é : /n" << this->getChavePix() << std::endl;
	std::cout << "O Pagamento por Pix demora em cerca de 30 minutos para ser confirmado." << std::endl;
}