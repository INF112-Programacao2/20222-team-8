#include <iostream>
#include <string>
#include "pagamentopix.h"



PagamentoPix::PagamentoPix(int id, std::string chavePix): 
	Pagamento(id), chave_pix(chavePix) {}

void PagamentoPix::ExibirPagamento() const
{
	std::cout << "Exibindo Dados do Pagamento :  " << std::endl;
	std::cout << "Pagamento com id " << getId() << " foi feito usando Pix\n";
	std::cout << "O Pagamento por Pix demora em cerca de 30 minutos para ser confirmado." << std::endl;
}

std::string PagamentoPix::getChave() const
{
	return chave_pix;
}

void PagamentoPix::setChave(std::string chavePix)
{
	chave_pix = chavePix;
}
