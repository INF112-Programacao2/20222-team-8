#include <string>
#include <iostream>
#include "contatofinanceiro.h"

// pos(int x, int y) : vetor(x, y) {} //chama o construtor da classe base
//ContatoFianceiro(int cnpj, std::string redeSocial, std::string emailFinanceiro)
	//Contato(cnpj, redeSocial, emailFinanceiro) {}

ContatoFianceiro::ContatoFinanceiro(int cnpj, std::string redeSocial, std::string emailAjuda, int qtdItens) :
Contato(cnpj,redeSocial,emailajuda), _QtdItens(qtdItens) {}

void ContatoFianceiro::ExibirContato() {
	std::cout << "Oi";
	/*std::cout << "Caso precise entrar em contato mande uma mensagens com mais detalhes (o comprovante de "
	<<"pagamento caso tenha ) para nosso email : ";
	std::cout << getEmail() << std::endl;
	std::cout << "\nNossas vendas de atacado são a partir de 20 unidades, esse valor representa a quantidade" <<
	"por iteis.O pagamento não é pelo carrinho de compras, apos a analise do pedido entraremos em contato ."; //contato por onde
	//entrada do orçamento para o cliente (fstream)
	std::cout << "\nNo email precisamos que atente a algumas informações: \n1-Escreva o nome do produto" <<//lista pra exibição
	std::cout << " e a quantidade do mesmo, em caso de mais de um item faca uma lista com esses itens. ";
	std::cout<<"\n2-Informe a data que você precisa receber esse itens,o tempo medio é cerca de 2 semanas.";
	std::cout << "\n3-Caso seu produto tenha uma caracteristica especifica, como cor ou tamanho, deixe claro qual item"
	<< " esta sendo especificado";
	std::cout << "\n4-Precisamos que voce deixe algumas informações:\n1-Deixe seu nome e seu CPF."
	<< "\n2-Deixa um numero de celular para contato, identificar o DDD.";
	std::cout << "\nO numero do nosso CNPJ : " << getCnpj() << std::endl;
	std::cout << getRedeSocial();*/
}