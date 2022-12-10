#include <iostream>
#include <fstream>
#include <string>

#include "produto.h"
#include "pedido.h"
#include "carrinho.h"

int main() {

    int resposta, qualproduto;
    char simounao, tamanho;
    bool erro = false;
    std::string linha;

    std::cout << "\n**********Seja bem-vindo/a ao e-commerce de produtos de Ciencia da Computacao de Vicosa**********\n";
    std::cout << "\nO que deseja fazer?\nDigite 1 - Comecar a comprar\nDigite 2 - Finalizar e sair\n";
    std::cin >> resposta;
    std::cout << std::endl;


     switch(resposta) {
         
         case 1: {

            std::cout << "----Produtos disponiveis nesse e-commerce----\n" << std::endl;

            std::ifstream fin1("moletomCliente.txt");
              if(fin1.is_open())
                 while(getline(fin1,linha))
                      std::cout << linha << std::endl;
            std::cout << std::endl;
            std::ifstream fin2("camisaCliente.txt");
              if(fin2.is_open())
                 while(getline(fin2,linha))
                      std::cout << linha << std::endl;
            std::cout << std::endl;          
            std::ifstream fin3("canecaCliente.txt");
              if(fin3.is_open()) 
                 while(getline(fin3,linha))
                      std::cout << linha << std::endl;
            std::cout << std::endl;          
            std::ifstream fin4("tiranteCliente.txt");
              if(fin4.is_open())
                 while(getline(fin4,linha))
                      std::cout << linha << std::endl;          
            std::cout << std::endl;

            std::cout << "Gostaria de adicionar algum produto ao carrinho (Digite S para sim e N para nao)? ";
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
                 std::cout << "Ah que pena, mas obrigado pela visita!";
                 return 0;
             }
             else {
               while(true) {
                    Carrinho c;                              // CARRINHO
                    c.adicionarProdutos();

                    std::cout << "\nGostaria de adicionar mais produtos ao carrinho (Digite S para sim e N para nao)? ";
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
         }



            /* \nDigite 1 - Moletom\nDigite 2 - Camisa\nDigite 3 - Caneca\nDigite 4 - Tirante\n" << 
             "Caso deseje sair do programa, digite 5";*/
     }

}
