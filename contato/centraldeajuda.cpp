#include "centraldeajuda.h"
#include <iostream>
#include <string>
using namespace std;

CentraldeAjuda::CentraldeAjuda(long long int cnpj, string redeSocial, string emailajuda) {
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
	try {
		cin >> escolha;
		if (escolha != 1 && escolha != 2 && escolha !=3 && escolha != 4)
		{
			throw std::invalid_argument("Nao existe ajuda com essa escolha !");
		}
		escolhe:
			switch (escolha)
			{
			case 1: {
				cout << "Se o seu pagamento foi processado com sucesso, voce deve receber uma notificacao em seu email com seu codigo do pedido e seu codigo de rastreeio ,se for necessario. Caso voce tenha pagado o boleto em uma data apos o vencimento entre em contato pelo email : " << getEmail() << std::endl;
				cout << "\nEsta tendo mais algum problema ? Se sim digite qual problema vc esta tendo. \n1-Problema com pagamento.\n2-Cancelamento do pedido.\n";
				cout << "3-Pedido e envio.\n4-Retorno e reembolso\nSe nao, digite o numero 9\n";
				try {
					cin >> escolha;
					if (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 9)
					{
						throw std::invalid_argument("Nao existe ajuda com essa escolha !");
					}
				}
				catch (const std::invalid_argument& e) {
					std::cout << "Erro: " << e.what() << std::endl;
				}
				goto escolhe;
				break;
			}
			case 2: {
				cout << "Os cancelamentos antes do pagamento do pedido podem ser feitos a qualquer momento.\nNao havera processamento de reembolso, uma vez que o pagamento nao foi efetuado.\nSe voce ja tiver pago seu pedido, a solicitacao de cancelamento estara disponivel nos casos em que seu pedido ainda nao foi enviado para a entrega (a nossa loja tem 48h para preparo do seu pedido apos confirmacao do pagamento).\n";
				cout << "\nEsta tendo mais algum problema ? Se sim digite qual problema vc esta tendo. \n1-Problema com pagamento.\n2-Cancelamento do pedido.\n";
				cout << "3-Pedido e envio.\n4-Retorno e reembolso\nSe nao, digite o numero 9\n";
				try {
					cin >> escolha;
					if (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 9)
					{
						throw std::invalid_argument("Nao existe ajuda com essa escolha !");
					}
				}
				catch (const std::invalid_argument& e) {
					std::cout << "Erro: " << e.what() << std::endl;
				}
				goto escolhe;
				break;
			}
			case 3: {
				cout << "\nPara acompanhar seu pedido voce deve verificar o codigo do rastreeio recebido em seu email";
				cout << " apos o processamento do seu pedido" << endl;
				cout << "\nEsta tendo mais algum problema ? Se sim digite qual problema vc esta tendo. \n1-Problema com pagamento.\n2-Cancelamento do pedido.\n";
				cout << "3-Pedido e envio.\n4-Retorno e reembolso\nSe nao, digite o numero 9\n";
				cin >> escolha; goto escolhe;
				break;
			}
			case 4: {
				cout << "Os termos e condicoes para compradores que devolvem produtos sao os seguintes : \n";
				cout << "Voce deve enviar todos os intens que compoem o produto;\n";
				cout << "O produto deve ser dovolvido em sua embalagem original;\n";
				cout << "O produto nao deve conter indicios de uso;\n";
				cout << "O produto deve conter todas as etiquetas intactas;\n";
				cout << "O produto deve ser enviado juntamente com a nota fiscal, manuais, acessorios e brindes." << endl;
				cout << "Os compradores podem devolver produtos pelos seguintes motivos\n";
				cout << "Nao recebeu o pedido(por exemplo, pacote perdido em trânsito)\n";
				cout << "Recebeu um produto incompleto(por exemplo, pecas ausentes do produto, produtos ausentes do pedido)\n";
				cout << "Recebeu o(s) produto(s) errado(s) (por exemplo, tamanho / cor errada, produto diferente)\n";
				cout << "Recebeu um produto com danos fisicos(por exemplo, amassados, arranhoes, rachaduras)\n";
				cout << "Recebeu um produto com defeito(por exemplo, mau funcionamento, nao funciona como pretendido)";
				cout << "\nEsta tendo mais algum problema ? Se sim digite qual problema vc esta tendo. \n1-Problema com pagamento.\n2-Cancelamento do pedido.\n";
				cout << "3-Pedido e envio.\n4-Retorno e reembolso\nSe nao, digite o numero 9\n";
				try {
					cin >> escolha;
					if (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 9)
					{
						throw std::invalid_argument("Nao existe ajuda com essa escolha !");
					}
				}
				catch (const std::invalid_argument& e) {
					std::cout << "Erro: " << e.what() << std::endl;
				}
				goto escolhe;
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
	catch (const std::invalid_argument& e) {
		std::cout << "Erro: " << e.what() << std::endl;
	}
}



