#ifndef TEAM8_CONTATOFINANCEIRO_H
#define TEAM8_CONTATOFINANCEIRO_H
#include <string>
#include "contato.h"
class ContatoFinanceiro : public Contato
{

public:
	//Construtor
	ContatoFinanceiro(long long int cpnj, std::string redeSocial, std::string emailfinanceiro);
	//metodo do contato financeiro
	void ExibirContato();
	//getter
	std::string getEmail();
private:
	std::string EmailContato;
};

#endif // !TEAM8_CONTATOFINANCEIRO_H
