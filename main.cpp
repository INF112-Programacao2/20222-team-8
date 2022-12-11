#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

#include "carrinho.h"

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
