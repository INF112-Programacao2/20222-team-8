#include <iostream>
#include <string>
#include "pagamento.h"
#include "pagamentopix.h"
#include "pagamentoqrcode.h"

int main() {
	Pagamento P1(1);
	PagamentoQrCode P2("1A45", 1);
	//PagamentoPix P3(13527852697, 2);

	P1.exibirPagamento();
	P2.exibirPagamento();
	//P3.exibirPagamento();


	system("pause");
	return 0;
}