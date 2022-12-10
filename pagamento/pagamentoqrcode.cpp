#include "pagamentoqrcode.h"
#include <iostream>
#include <string>


PagamentoQrCode::PagamentoQrCode(int id, std::string codeQr):
 Pagamento(id),code_Qr(codeQr){}

void PagamentoQrCode::ExibirPagamento() const
{
	std::cout << "Exibindo Dados do Pagamento :  " << std::endl;
	std::cout << "Pagamento com id " << getId() << " foi feito usando QrCode\n";
	std::cout << "O pagamento por boleto demora de 1 a 3 dias uteis para ser contabilizado " <<
	"Entraremos em contato quando for aprovado!" << std::endl;
}

std::string PagamentoQrCode::getCodeQr() const
{
	return code_Qr;
}

void PagamentoQrCode::setCodeQr(std::string codeQr)
{
	code_Qr = codeQr;
}
