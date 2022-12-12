#include "pagamentoqrcode.h"
#include <iostream>
#include <string>


PagamentoQrCode::PagamentoQrCode(int id, std::string codeQr) :
    Pagamento(id), code_Qr(codeQr) {}

std::string PagamentoQrCode::getCodeQr() const
{
    return code_Qr;
}

void PagamentoQrCode::setCodeQr(std::string codeQr)
{
    code_Qr = codeQr;
}
