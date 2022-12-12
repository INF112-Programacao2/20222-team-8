#include <iostream>
#include <string>
#include "pagamentopix.h"



PagamentoPix::PagamentoPix(int id, std::string chavePix) :
	Pagamento(id), chave_pix(chavePix) {}


std::string PagamentoPix::getChave() const
{
	return chave_pix;
}

void PagamentoPix::setChave(std::string chavePix)
{
	chave_pix = chavePix;
}
