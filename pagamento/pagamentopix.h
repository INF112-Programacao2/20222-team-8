#ifndef TEAM8_PAGAMENTOPIX_H
#define TEAM8_PAGAMENTOPIX_H
#include "pagamento.h"
#include <string>

class PagamentoPix : Pagamento
{
public:
	// Constructor
	PagamentoPix(int id, std::string key);
	// Método substituído para exibir informações de pagamento
	void ExibirPagamento() const override;
	//Getter para Chave Pix
	std::string getChave() const;
	// Setter para chavepix
	void setChave(std::string key);
private:
	// Pix key usado para pagamento
	std::string chave_pix;
};


#endif // !TEAM8_PAGAMENTOPIX_H