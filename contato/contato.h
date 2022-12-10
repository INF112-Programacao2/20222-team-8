#ifndef TEAM8_CONTATO_H
#define TEAM8_CONTATO_H
#include <string>
class Contato
{
public:
	//Contato(int cpnj,std::string redeSocial);
	void setRedeSocial(std::string redeSocial);
	std::string getRedeSocial();
	int getCnpj();
	void virtual ExibirContato()=0;
	

protected:
	int const Cnpj;
	std::string EmailContato;
	std::string RedeSocial;

};


#endif // !TEAM8_CONTATO_H

