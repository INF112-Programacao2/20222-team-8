#ifndef TEAM8_CONTATOFINANCEIRO_H
#define TEAM8_CONTATOFINANCEIRO_H
#include <string>
#include "contato.h"
class ContatoFianceiro : public Contato
{
public:
	ContatoFinanceiro(int cnpj, std::string redeSocial, std::string emailajuda, int QtdItens);
	void virtual ExibirContato() override;
private:
	int _QtdItens;
};

#endif // !TEAM8_CONTATOFINANCEIRO_H
