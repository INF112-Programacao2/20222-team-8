#ifndef TEAM8_CONTATOFINANCEIRO_H
#define TEAM8_CONTATOFINANCEIRO_H
#include <string>
#include "contato.h"
class ContatoFinanceiro : public Contato
{

public:
	ContatoFinanceiro(long long int cpnj, std::string redeSocial, std::string emailfinanceiro);
	void ExibirContato();
	std::string getEmail();
private:
	std::string EmailContato;
};

#endif // !TEAM8_CONTATOFINANCEIRO_H
