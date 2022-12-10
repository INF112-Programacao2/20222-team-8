#ifndef TEAM8_PAGAMENTOQR_H
#define TEAM8_PAGAMENTOQR_H
#include <string>
#include "pagamento.h"

class PagamentoQrCode : Pagamento
{
public:
	PagamentoQrCode(std::string qrcode, int id);
	void setQrCode(std::string qrcode);
	std::string getQrCode();
	void virtual exibirPagamento() override;

private:
	std::string QrCode;
};

#endif //!TEAM8_PAGAMENTOQR_H