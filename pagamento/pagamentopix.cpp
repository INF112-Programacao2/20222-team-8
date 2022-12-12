#include <iostream>
#include <string>
#include "pagamentopix.h"



PagamentoPix::PagamentoPix(int id, std::string chavePix) :
	Pagamento(id), chave_pix(chavePix) {}

void PagamentoPix::ExibirPagamento() const
{
    std::ifstream arquivoEntrada("orcamento.txt");
    std::ofstream arquivoSaida("arquivo_saida.txt");
    std::string linha;

    if (arquivoEntrada.is_open()) {
        while (getline(arquivoEntrada, linha)) {
            arquivoSaida << linha << std::endl;
        }
        arquivoSaida << "Pagamento com id " << getId() << " foi feito usando Pix\n" << getChave();
        arquivoSaida << "O Pagamento por Pix demora em cerca de 30 minutos para ser confirmado." << std::endl;
    }
    else {
        std::cout << "Unable to open file" << std::endl;
    }
    arquivoEntrada.close();
    arquivoSaida.close();
}

std::string PagamentoPix::getChave() const
{
	return chave_pix;
}

void PagamentoPix::setChave(std::string chavePix)
{
	chave_pix = chavePix;
}
