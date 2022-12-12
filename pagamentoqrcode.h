#ifndef TEAM8_PAGAMENTOQR_H
#define TEAM8_PAGAMENTOQR_H
#include <string>
#include "pagamento.h"

class PagamentoQrCode : Pagamento
{
public:
	PagamentoQrCode(int id, std::string codeQr);
	std::string getCodeQr() const;
	void setCodeQr(std::string codeQr);
private:
	std::string code_Qr;
};

#endif //!TEAM8_PAGAMENTOQR_H