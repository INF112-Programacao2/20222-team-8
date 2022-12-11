#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

#include "carrinho.h"
#include "contato/contato.h"
#include "contato/centraldeajuda.h"
#include "contato/contatofinanceiro.h"

//para a parte do orcamento
struct Item {
    std::string name;
    int quantity;
};

struct Orcamento {
    std::string name;
    std::string cpf;
    std::string email;
    std::vector<Item> items;
};


int main() {

    int escolha;
    std::cout << "Escolha sua opçao para continuar\n";
    std::cout << "1-Cliente | 2-Adiministrador: ";
    std::cin >> escolha;
    //Switch da escolha de admin ou cliente
    switch (escolha) {
        case 1: { {
                int resposta, qualproduto;
                char simounao;
                bool erro = false;
                std::string linha;

                std::cout << "\n**********Seja bem-vindo/a ao e-commerce de produtos de Ciencia da Computacao de Vicosa**********\n";
                std::cout << "\nO que deseja fazer?\nDigite 1 - Comecar a comprar | Digite 2 - Finalizar e sair: ";
                std::cin >> resposta;
                std::cout << std::endl;


                switch (resposta) {

                case 1: {

                    //std::string linha;
                    std::ifstream fin1("moletomCliente.txt");
                    if (fin1.is_open())
                        while (getline(fin1, linha))
                            std::cout << linha << std::endl;
                    std::cout << std::endl;
                    std::ifstream fin2("camisaCliente.txt");
                    if (fin2.is_open())
                        while (getline(fin2, linha))
                            std::cout << linha << std::endl;
                    std::cout << std::endl;
                    std::ifstream fin3("canecaCliente.txt");
                    if (fin3.is_open())
                        while (getline(fin3, linha))
                            std::cout << linha << std::endl;
                    std::cout << std::endl;
                    std::ifstream fin4("tiranteCliente.txt");
                    if (fin4.is_open())
                        while (getline(fin4, linha))
                            std::cout << linha << std::endl;
                    std::cout << std::endl;

                    std::cout << "Gostaria de adicionar algum produto ao carrinho (Digite S para sim e N para nao)?: ";
                    do {
                        try {
                            std::cin >> simounao;
                            if (simounao != 'N' && simounao != 'n' && simounao != 'S' && simounao != 's')
                                throw "Resposta invalida! Digite S ou N: ";
                        }
                        catch (const char* msg) {
                            std::cout << msg << std::endl;
                            return true;
                        }
                    } while (erro);

                    if (simounao == 'N' || simounao == 'n') {
                        std::cout << "Ah que pena, mas obrigado pela visita!";
                        return 0;
                    }
                    else {
                        while (true) {
                            Carrinho c;                              // CARRINHO
                            c.adicionarProdutos();

                            std::cout << "\nGostaria de adicionar mais produtos ao carrinho (Digite S para sim e N para nao)?: ";
                            do {
                                try{
                                    std::cin >> simounao;
                                    if(simounao!='N' && simounao!='n' && simounao!='S' && simounao!='s')
                                        throw "Resposta invalida! Digite S ou N: "; 
                                        erro = false;    
                                    } catch(const char *msg) {
                                        std::cout << msg << std::endl;
                                        erro = true;
                                    }

                            } while(erro);

                            if(simounao=='N' || simounao=='n') {  
                                return false;
                            }
                         }
                    }
                    /* \nDigite 1 - Moletom\nDigite 2 - Camisa\nDigite 3 - Caneca\nDigite 4 - Tirante\n" <<
                    "Caso deseje sair do programa, digite 5";*/
                }

                case 2:{
                    std::cout << "***Aplicacao Encerrada***" << std::endl;
                    return 0;
                }

            }

                //Parte entrar em contato cliente
                std::cout << "Esta precisando entrar em contato ? Escolha uma das opçoes:\n";
                std::cout << "1-Central de Ajuda\n2-Contato financeiro\n3-Encerrar Programa\n";
                int contato;
                //entrada witch com excessao
                try {
                    cin >> contato;
                    switch (contato)
                    {
                    case 1: //Central De Ajuda
                    {
                        CentraldeAjuda* central = CentraldeAjuda(20472256000109, "Instagram : ccpstrore", "ccpstore@help.br");
                        central->ExibirContato();
                    }
                    case 2://Contato Financeiro
                    {
                        ContatoFinanceiro* contato = new ContatoFinanceiro(20472256000109, "Instagram : ccpstrore", "ccpstore@financeiro.br");
                        contato->ExibirContato();
                        //Leitura de um arquico para leitura de qtd de itens
                        std::cout << "****Preencha Seus Dados Para o Orçamento*****\n";
                        std::ofstream file("orcamento.txt");
                        //text para ver se o qrquivo foi aberto
                        if (!file.is_open()) {
                            std::cerr << "Error: unable to open file\n";
                            return 1;
                        }
                        //criar struct orcamento
                        Orcamento orcamento;
                        //leitura dos dados cliente
                        std::cout << "Escreva seu nome: ";
                        std::getline(std::cin, orcamento.name);
                        file << "Nome cliente: " << orcamento.name << '\n';

                        std::cout << "Escreva o seu CPF: ";
                        std::getline(std::cin, orcamento.cpf);
                        file << "CPF: " << orcamento.cpf << '\n';

                        std::cout << "Escreva seu email: ";
                        std::getline(std::cin, orcamento.email);
                        file << "Email: " << orcamento.email << '\n';

                        std::string item_name;
                        int item_quantity;
                        //loop para que possa se adicionar mais de um item
                        while (true) {
                            std::cout << "Escreva o nome do produto (ou aperte a tecla ENTER para finalizar): ";
                            std::getline(std::cin, item_name);
                            if (item_name.empty()) {
                                break;
                            }

                            std::cout << "Escreva a quantidade desse item: ";
                            std::cin >> item_quantity;
                            std::cin.ignore();

                            orcamento.items.push_back({ item_name, item_quantity });
                        }

                        file << "Items:\n";
                        for (const auto& item : orcamento.items) {
                            file << "  - " << item.name << " (" << item.quantity << ")\n";
                        }

                        file.close();

                        std::cout << "Orcamento salvo com sucesso.\n";
                        {


                            std::ofstream file("orcamento.txt");
                        }
                        break; }
                    case 3:
                    {
                        break;
                    }
                    default:
                        throw std::invalid_argument("Escolha invalida. Escolha 1, 2, ou 3.");
                    }
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Erro: " << e.what() << std::endl;
                }
            }}
        case 2: {
            using namespace std;
            const string USERNAME = "admin";
            const string PASSWORD = "123456";

            bool w = true;
            while (w)
            {
                cout << "Enter username: ";
                string username;
                cin >> username;

                cout << "Enter password: ";
                string password;
                cin >> password;

                try
                {
                    if (username != USERNAME || password != PASSWORD)
                    {
                        throw runtime_error("Invalid username or password");
                    }
                    //main adm vai ficar aqq
                    w = 0;
                    cout << "SIstema ADM\n";


                }
                catch (exception& e)
                {
                    cout << "Error: " << e.what() << endl;
                }
            }
          }
        }
        
        case 2: {
            using namespace std;
            const string USERNAME = "admin";
            const string PASSWORD = "123456";

            bool w = true;
            while (w)
            {
                cout << "Enter username: ";
                string username;
                cin >> username;

                cout << "Enter password: ";
                string password;
                cin >> password;

                try
                {
                    if (username != USERNAME || password != PASSWORD)
                    {
                        throw runtime_error("Invalid username or password");
                    }
                    //main adm vai ficar aqq
                    w = 0;
                    cout << "Sistema ADM\n";


                }
                catch (exception& e)
                {
                    cout << "Error: " << e.what() << endl;
                }
            }

            int resposta;
            std::cout << "******Seja bem-vindo/a (admin)******" << std::endl;
            std::cout << "O que deseja fazer:" << std::endl;
            std::cout << "1 - Adicionar Produtos | 2 - Remover Produtos | 3 - Sair: ";
            std::cin >> resposta;

            switch (resposta){
                case 1:{
                    Produto produto;
                    produto.cadastraProduto();
                    break;
                }

                case 3:{
                    std::cout << "Aplicacao encerrada" << std::endl;
                    break;
                }
            }

        }
        //system("pause");
        return 0;
    }

}
