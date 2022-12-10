//fazer saida de arquivo para receber a reclamação do cliente
#ifndef TEAM8_CENTRALDEAJUDA_H
#define TEAM8_CENTRALDEAJUDA_H
#include <string>
#include "contato.h"

class CentraldeAjuda : public Contato
{
public:

	CentraldeAjuda(int cpnj,std::string redeSocial, std::string emailajuda);
	void virtual ExibirContato() override;


};

#endif // !TEAM8_CENTRALDEAJUDA_H

