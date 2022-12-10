#ifndef TEAM8_PAGAMENTOQR_H
#define TEAM8_PAGAMENTOQR_H
#include <string>
#include "pagamento.h"

class PagamentoQrCode : Pagamento
{
public:
	//Construter
	PagamentoQrCode(int id, std::string codeQr);
	// Método substituído para exibir informações de pagamento
	void ExibirPagamento() const override;
	// Getter for code_ attribute
	std::string getCodeQr() const;
	// Setter for code_ attribute
	void setCodeQr(std::string codeQr);
private:
	// QR code value used for payment
	std::string code_Qr;
};

#endif //!TEAM8_PAGAMENTOQR_H