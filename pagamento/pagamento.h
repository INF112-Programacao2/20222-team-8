#ifndef TEAM8_PAGAMENTO_H
#define TEAM8_PAGAMENTO_H
#include <string>

class Pagamento : 
{
public:
	Pagamento(int id);
	void virtual exibirPagamento();
	void setIdPagamento(int id);
	int getIdPagamento();

protected:
	int idPagamento;
};
#endif // !TEAM8_PAGAMENTO_H

