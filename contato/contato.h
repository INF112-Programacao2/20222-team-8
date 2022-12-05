#ifndef TEAM8_CONTATO_H
#define TEAM8_CONTATO_H
#include <string>
class Contato
{
public:
	Contato(int cpnj,std::string redeSocial, std::string emailGeral);
	void setEmail(std::string emailGeral);
	void setRedeSocial(std::string redeSocial);
	std::string getEmail();
	std::string getRedeSocial();
	int getCnpj();
	void virtual ExibirContato();
	

protected:
	int const Cnpj;
	std::string EmailContato;
	std::string RedeSocial;

};


#endif // !TEAM8_CONTATO_H

