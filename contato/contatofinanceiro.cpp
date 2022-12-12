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
    std::cout << "Caso precise entrar em contato mande uma mensagens com mais detalhes (o comprovante de ";
    std::cout << "pagamento caso tenha ) para nosso email : ";
    std::cout << ContatoFinanceiro::getEmail() << std::endl;
    std::cout << "\nNossas vendas de atacado sao a partir de 20 unidades, esse valor representa a quantidade";
    std::cout <<  "por iteis.O pagamento nao e pelo carrinho de compras, apos a analise do pedido entraremos em contato .";
    std::cout << "\nO numero do nosso CNPJ : " << ContatoFinanceiro::getCnpj() << std::endl;
    std::cout << ContatoFinanceiro::getRedeSocial();
}



/* TRATAMENTO EXCESSAO PAR O MAIN
#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        int x;
        cout << "Digite um inteiro maior que 20: ";
        try
        {
            cin >> x;

            if (x < 20)
            {
                throw runtime_error("Valor invalido: " + to_string(x) + ". O numero deve ser maior ou igual a 20.");
            }
            else
            {
                cout << "Numero valido: " << x << endl;
                break;
            }
        }
        catch (runtime_error &e)
        {
            cout << e.what() << endl;
        }
    }
}*/