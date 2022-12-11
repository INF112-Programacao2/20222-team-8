#include "centraldeajuda.h"
#include <iostream>
#include <string>
using namespace std;

CentraldeAjuda::CentraldeAjuda(int cnpj, string redeSocial, string emailajuda) {
	CPNJ = cnpj;
	RedeSocial = redeSocial;
	EmailContato = emailajuda;
}


string CentraldeAjuda::getEmail() {
	return EmailContato;
}

void CentraldeAjuda::ExibirContato() {
	cout << "Qual problema voce esta tendo ? \n1-Problema com pagamento.\n2-Cancelamento do pedido.\n";
	cout << "3-Pedido e envio.\n4-Retorno e reembolso" << endl;

	int escolha;
	cin >> escolha;
escolhe:
	switch (escolha)
	{
	case 1: {
		cout << "Se o seu pagamento foi processado com sucesso, você deve receber uma notificação em seu email com seu codigo do pedido e seu codigo de rastreeio ,se for necessario. Caso voce tenha pagado o boleto em uma data após o vencimento entre em contato pelo email : " << getEmail() << std::endl;
		cout << "Esta tendo mais algum problema ? Se sim digite qual problema vc esta tendo. \n1-Problema com pagamento.\n2-Cancelamento do pedido.\n";
		cout << "3-Pedido e envio.\n4-Retorno e reembolso\nSe não, digite o numero 9\n";
		cin >> escolha; goto escolhe;
		break;
	}
	case 2: {
		cout << "Os cancelamentos antes do pagamento do pedido podem ser feitos a qualquer momento.\nNão haverá processamento de reembolso, uma vez que o pagamento não foi efetuado.\nSe você já tiver pago seu pedido, a solicitação de cancelamento estará disponível nos casos em que seu pedido ainda não foi enviado para a entrega (a nossa loja tem 48h para preparo do seu pedido apos confirmação do pagamento).\n";
		cout << "Esta tendo mais algum problema ? Se sim digite qual problema vc esta tendo. \n1-Problema com pagamento.\n2-Cancelamento do pedido.\n";
		cout << "3-Pedido e envio.\n4-Retorno e reembolso\nSe não, digite o numero 9\n";
		cin >> escolha; goto escolhe;
		break;
	}
	case 3: {
		cout << "Você pode verificar as taxas estimadas de envio de produtos em seu pedido durante a finalização do pedido";
		cout << "\nPara acompanhar seu pedido você deve verificar o codigo do rastreeio recebido em seu email";
		cout << " apos o processamento do seu pedido" << endl;
		cout << "Esta tendo mais algum problema ? Se sim digite qual problema vc esta tendo. \n1-Problema com pagamento.\n2-Cancelamento do pedido.\n";
		cout << "3-Pedido e envio.\n4-Retorno e reembolso\nSe não, digite o numero 9\n";
		cin >> escolha; goto escolhe;
		break;
	}
	case 4: {
		cout << "Os termos e condições para compradores que devolvem produtos são os seguintes : \n";
		cout << "Voce deve enviar todos os intens que compoem o produto;\n";
		cout << "O produto deve ser dovolvido em sua embalagem original;\n";
		cout << "O produto nao deve conter indícios de uso;\n";
		cout << "O produto deve conter todas as etiquetas intactas;\n";
		cout << "O produto deve ser enviado juntamente com a nota fiscal, manuais, acessorios e brindes." << endl;
		cout << "Os compradores podem devolver produtos pelos seguintes motivos\n";
		cout << "Não recebeu o pedido(por exemplo, pacote perdido em trânsito)\n";
		cout << "Recebeu um produto incompleto(por exemplo, peças ausentes do produto, produtos ausentes do pedido)\n";
		cout << "Recebeu o(s) produto(s) errado(s) (por exemplo, tamanho / cor errada, produto diferente)\n";
		cout << "Recebeu um produto com danos físicos(por exemplo, amassados, arranhões, rachaduras)\n";
		cout << "Recebeu um produto com defeito(por exemplo, mau funcionamento, não funciona como pretendido)";
		cout << "Esta tendo mais algum problema ? Se sim digite qual problema vc esta tendo. \n1-Problema com pagamento.\n2-Cancelamento do pedido.\n";
		cout << "3-Pedido e envio.\n4-Retorno e reembolso\nSe não, digite o numero 9\n";
		cin >> escolha; goto escolhe;
		break;
	}
	case 9: {
		cout << "\nCaso tenha um problema mais especifico nos mande um email explicando os acontecimentos : ";
		cout << CentraldeAjuda::getEmail() << endl;
		cout << "O numero do nosso CNPJ : " << CentraldeAjuda::getCnpj() << endl;
		cout << CentraldeAjuda::getRedeSocial();
	}
	}
}



