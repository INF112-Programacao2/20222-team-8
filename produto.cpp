#include <iostream>
#include <fstream>
#include "produto.h"

int Produto::getIdProduto(){
    return idProduto;
}

int Produto::getQuantidade(){
    return quantidade;
}

char Produto::getTamanhoProduto(){
    return tamanhoProduto;
}

double Produto::getPrecoProduto(){
    return precoProduto;
}

void Produto::cadastraProduto(){
    bool saida = true;
    std::ofstream moletomcliente("moletomcliente.txt", std::ios::app);
    std::ofstream camisaCliente("camisaCliente.txt", std::ios::app);
    std::ofstream canecaCliente("canecaCliente.txt", std::ios::app);
    std::ofstream tiranteCliente("tiranteCliente.txt", std::ios::app);

    while(saida){
        int prod;
        std::cout << "Qual produto quer cadastrar 1 - Moletom | 2 - Camisa | 3 - Caneca | 4 - Tirante?: ";
        std::cin >> prod;
        switch (prod){
            case 1:{
                std::cout << "Entre com a id do produto: ";
                std::cin >> idProduto;
                std::cout << "Entre com o preco do produto: ";
                std::cin >> precoProduto;
                moletomcliente << "***Moletom CCP***" << std::endl;
                moletomcliente << std::endl;
                moletomcliente << "Preco: R$" << precoProduto << std::endl;
                moletomcliente << std::endl;
                moletomcliente << "Tamanhos Disponiveis: ";
                while(true){
                    char flag;
                    std::ofstream produto("moletom.txt", std::ios::app);
                    
                    produto << "***Cadastrando Moletons***" << std::endl;
                    produto << "idProduto: " << idProduto << std::endl;
                    std::cout << "Entre com o tamanho do produto: ";
                    std::cin >> tamanhoProduto;
                    produto << "tamanhoProduto: " << tamanhoProduto << std::endl;
                    produto << "precoProduto: R$" << precoProduto << std::endl;

                    moletomcliente << tamanhoProduto << " ";

                    std::cout << "Entre com a quantidade desse produto: ";
                    std::cin >> quantidade;
                    produto << quantidade << " unidades" << std::endl;
                    std::cout << "Deseja cadastrar mais tamanhos (S/N)?: ";
                    std::cin >> flag;
                    produto << std::endl;
                    produto.close();
                    if(flag == 'N'){
                        char flag2;
                        std::cout << "Deseja cadastrar mais produtos (S/N)?: ";
                        std::cin >> flag2;
                        if(flag2 == 'N'){
                            std::cout << "Aplicacao encerrada" << std::endl;
                            saida = false;
                        }
                            
                        break;
                    }
                }
            }
            break;

            case 2:{
                std::cout << "Entre com a id do produto: ";
                std::cin >> idProduto;
                std::cout << "Entre com o preco do produto: ";
                std::cin >> precoProduto;
                camisaCliente << "***Camisa CCP***" << std::endl;
                camisaCliente << std::endl;
                camisaCliente << "Preco: R$" << precoProduto << std::endl;
                camisaCliente << std::endl;
                camisaCliente << "Tamanhos Disponiveis: ";
                while(true){
                    char flag;
                    std::ofstream produto("camisa.txt", std::ios::app);
                    produto << "***Cadastrando Camisas***" << std::endl;
                    produto << "idProduto: " << idProduto << std::endl;
                    std::cout << "Entre com o tamanho do produto: ";
                    std::cin >> tamanhoProduto;
                    produto << "tamanhoProduto: " << tamanhoProduto << std::endl;
                    produto << "precoProduto: R$" << precoProduto << std::endl;

                    camisaCliente << tamanhoProduto << " ";

                    std::cout << "Entre com a quantidade desse produto: ";
                    std::cin >> quantidade;
                    produto << quantidade << " unidades" << std::endl;
                    std::cout << "Deseja cadastrar mais tamanhos (S/N)?: ";
                    std::cin >> flag;
                    produto << std::endl;
                    produto.close();
                    if(flag == 'N'){
                        char flag2;
                        std::cout << "Deseja cadastrar mais produtos (S/N)?: ";
                        std::cin >> flag2;
                        if(flag2 == 'N'){
                            std::cout << "***Aplicacao encerrada***" << std::endl;
                            saida = false;
                        }
                            
                        break;
                    }
                }
            }
            break;

            case 3:{
                std::cout << "Entre com a id do produto: ";
                std::cin >> idProduto;
                std::cout << "Entre com o preco do produto: ";
                std::cin >> precoProduto;
                canecaCliente << "***Caneca CCP***" << std::endl;
                canecaCliente << std::endl;
                canecaCliente << "Preco: R$" << precoProduto << std::endl;
                canecaCliente << std::endl;
                canecaCliente << "Tamanho: U" << std::endl;
                while(true){
                    char flag;
                    std::ofstream produto("caneca.txt", std::ios::app);
                    produto << "***Cadastrando Canecas***" << std::endl;
                    produto << "idProduto: " << idProduto << std::endl;
                    produto << "tamanhoProduto: " << 'U' << std::endl;
                    produto << "precoProduto: R$" << precoProduto << std::endl;
                    std::cout << "Entre com a quantidade desse produto: ";
                    std::cin >> quantidade;
                    produto << quantidade << " unidades" << std::endl;
                    produto << std::endl;
                    produto.close();
                    char flag2;
                    std::cout << "Deseja cadastrar mais produtos (S/N)?: ";
                    std::cin >> flag2;
                    if(flag2 == 'N'){
                        std::cout << "***Aplicacao encerrada***" << std::endl;
                        saida = false;
                    }
                            
                    break;
                    
                }
            }
            break;

            case 4:{
                std::cout << "Entre com a id do produto: ";
                std::cin >> idProduto;
                std::cout << "Entre com o preco do produto: ";
                std::cin >> precoProduto;
                tiranteCliente << "***Tirante CCP***" << std::endl;
                tiranteCliente << std::endl;
                tiranteCliente << "Preco: R$" << precoProduto << std::endl;
                tiranteCliente << std::endl;
                tiranteCliente << "Tamanho: U" << std::endl;
                while(true){
                    char flag;
                    std::ofstream produto("tirante.txt", std::ios::app);
                    produto << "***Cadastrando Tirantes***" << std::endl;
                    produto << "idProduto: " << idProduto << std::endl;
                    produto << "tamanhoProduto: " << 'U' << std::endl;
                    produto << "precoProduto: R$" << precoProduto << std::endl;
                    std::cout << "Entre com a quantidade desse produto: ";
                    std::cin >> quantidade;
                    produto << quantidade << " unidades" << std::endl;
                    produto << std::endl;
                    produto.close();
                    char flag2;
                    std::cout << "Deseja cadastrar mais produtos (S/N)?: ";
                    std::cin >> flag2;
                    if(flag2 == 'N'){
                        std::cout << "***Aplicacao encerrada***" << std::endl;
                        saida = false;
                    }
                            
                    break;
                    
                }
            }
            break;
        }
    }
}

void Produto::removerProduto(){

}