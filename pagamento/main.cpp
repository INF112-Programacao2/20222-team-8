#include <iostream>
#include <string>
#include "pagamento.h"
#include "pagamentopix.h"
#include "pagamentoqrcode.h"

int main() {
	PagamentoQrCode P2(1, "Qrcod");
	PagamentoPix P3(1234, "as548");

	P2.ExibirPagamento();
	P3.ExibirPagamento();

	system("pause");
	return 0;
}