#include <string>
#include <iostream>
#include "contatofinanceiro.h"
using namespace std;

ContatoFinanceiro::ContatoFinanceiro(long long int cnpj, string redeSocial, string emailfinanceiro) {
    CPNJ = cnpj;
    RedeSocial = redeSocial;
    EmailContato = emailfinanceiro;
}


string ContatoFinanceiro::getEmail() {
    return EmailContato;
}

void ContatoFinanceiro::ExibirContato() {
    //metodo do polimorfismo do contato financeiro
    std::cout << "Caso precise entrar em contato mande uma mensagens com mais detalhes (o comprovante de ";
    std::cout << "pagamento caso tenha ) para nosso email : ";
    std::cout << ContatoFinanceiro::getEmail() << std::endl;
    std::cout << "\nNossas vendas de atacado sao a partir de 20 unidades, esse valor representa a quantidade";
    std::cout <<  "por iteis.O pagamento nao e pelo carrinho de compras, apos a analise do pedido entraremos em contato .";
    std::cout << "\nO numero do nosso CNPJ : " << ContatoFinanceiro::getCnpj() << std::endl;
    std::cout << ContatoFinanceiro::getRedeSocial();
}
