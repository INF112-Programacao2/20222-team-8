#include "pagamentoqrcode.h"
#include <iostream>
#include <string>


PagamentoQrCode::PagamentoQrCode(int id, std::string codeQr) :
    Pagamento(id), code_Qr(codeQr) {}

void PagamentoQrCode::ExibirPagamento() const
{
    std::ifstream arquivoEntrada("orcamento.txt");
    std::ofstream arquivoSaida("arquivo_saida.txt");
    std::string linha;

    if (arquivoEntrada.is_open()) {
        while (getline(arquivoEntrada, linha)) {
            arquivoSaida << linha << std::endl;
        }
        arquivoSaida << "Pagamento com id " << getId() << " foi feito usando QrCode\n" << getCodeQr();
        arquivoSaida << "O pagamento por boleto demora de 1 a 3 dias uteis para ser contabilizado " <<
            "Entraremos em contato quando for aprovado!" << std::endl;
    }
    else {
        std::cout << "Unable to open file" << std::endl;
    }
    arquivoEntrada.close();
    arquivoSaida.close();

}

std::string PagamentoQrCode::getCodeQr() const
{
    return code_Qr;
}

void PagamentoQrCode::setCodeQr(std::string codeQr)
{
    code_Qr = codeQr;
}
