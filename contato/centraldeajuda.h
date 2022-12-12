#ifndef TEAM8_CENTRALDEAJUDA_H
#define TEAM8_CENTRALDEAJUDA_H
#include <string>
#include "contato.h"

class CentraldeAjuda : public Contato
{
public:

	CentraldeAjuda(long long int cpnj, std::string redeSocial, std::string emailajuda);
	void ExibirContato();
	std::string getEmail();
private:
	std::string EmailContato;

};

#endif // !TEAM8_CENTRALDEAJUDA_H
