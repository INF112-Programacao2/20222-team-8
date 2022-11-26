#ifndef TEAM8_PAGAMENTOPIX_H
#define TEAM8_PAGAMENTOPIX_H
#include "pagamento.h"
#include <string>

class PagamentoPix : Pagamento
{
public:
	PagamentoPix(int chave, int id);
	int getChavePix();
	void setChavePix(int chave);
	void virtual exibirPagamento() override;

private:
	int chavePix;
};


#endif // !TEAM8_PAGAMENTOPIX_H