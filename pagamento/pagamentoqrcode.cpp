#include "pagamentoqrcode.h"
#include <iostream>
#include <string>

PagamentoQrCode::PagamentoQrCode(std::string qrcode, int id) :
	QrCode(qrcode), Pagamento(id) {}

std::string PagamentoQrCode::getQrCode() {
	return QrCode;
}

void PagamentoQrCode::setQrCode(std::string qrcode) {
	QrCode = qrcode;
}
void PagamentoQrCode::exibirPagamento() {
	std::cout << "Exibindo Dados do Pagamento :  /n" << std::endl;
	std::cout << "O Id do Pagamento é :" << this->getIdPagamento() << std::endl;
	std::cout << "O QrCode para pagamento do boleto é : /n" << this->getQrCode() << std::endl;
	std::cout << "O pagamento por boleto demora de 1 a 3 dias uteis para ser contabilizado " <<
		"Entraremos em contato quando for aprovado!" << std::endl;
}