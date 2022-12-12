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

int Produto::getQtMoletomP(){
    return qt_moletom_P;
}

int Produto::getQtMoletomM(){
    return qt_moletom_M;
}

int Produto::getQtMoletomG(){
    return qt_moletom_G;
}

int Produto::getQtCamisaP(){
    return qt_camisa_P;
}

int Produto::getQtCamisaM(){
    return qt_camisa_M;
}

int Produto::getQtCamisaG(){
    return qt_camisa_G;
}

int Produto::getQtCaneca(){
    return qt_caneca;
}

int Produto::getQtTirante(){
    return qt_tirante;
}

double Produto::getPrecoMoletom(){
    return precoMoletom;
}

double Produto::getPrecoCamisa(){
    return precoCamisa;
}

double Produto::getPrecoCaneca(){
    return precoCaneca;
}

double Produto::getPrecoTirante(){
    return precoTirante;
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
            int n;
            case 1:{
                std::cout << "Entre com a id do produto: ";
                std::cin >> idProduto;
                std::cout << "Entre com o preco do produto: ";
                std::cin >> precoMoletom;
                moletomcliente << "***Moletom CCP***" << std::endl;
                moletomcliente << "Preco: R$" << precoMoletom << std::endl;
                moletomcliente << "Tamanhos Disponiveis: ";
                while(true){
                    char flag;
                    std::ofstream produto("moletom.txt", std::ios::app);
                    
                    produto << "***Cadastrando Moletons***" << std::endl;
                    produto << "idProduto: " << idProduto << std::endl;

                    std::cout << "Entre com o tamanho do produto (P/M/G): ";
                     n = 0;
                         while(n==0) {
                             try{
                                std::cin >> tamanhoProduto;
                                 if(tamanhoProduto!='P' && tamanhoProduto!='M' && tamanhoProduto!='G')
                                     throw "Resposta invalida! Digite P, M ou G: "; 
                                 n = 1;
                             } catch(const char *msg) {
                                 std::cout << msg << std::endl;
                                 n = 0;
                             }
                         }  

                    produto << "tamanhoProduto: " << tamanhoProduto << std::endl;
                    produto << "precoProduto: R$" << precoMoletom << std::endl;

                    moletomcliente << tamanhoProduto << " ";
        
                    std::cout << "Entre com a quantidade desse produto: ";
                    std::cin >> quantidade;

                    if(tamanhoProduto == 'P'){
                        qt_moletom_P += quantidade;

                        std::cout << qt_moletom_P << std::endl;
                    }

                    else if(tamanhoProduto == 'M'){
                        qt_camisa_P += quantidade;
                    }
                    
                    else if(tamanhoProduto == 'G'){
                        qt_camisa_P += quantidade;
                    }

                    produto << quantidade << " unidades" << std::endl;
                    std::cout << "Deseja cadastrar mais tamanhos (S/N)?: ";
                    n = 0;
                         while(n==0) {
                             try{
                                std::cin >> flag;
                                 if(flag!='S' && flag!='s' && flag!='N' && flag!='n')
                                     throw "Resposta invalida! Digite S ou N: "; 
                                 n = 1;
                             } catch(const char *msg) {
                                 std::cout << msg << std::endl;
                                 n = 0;
                             }
                         }  
                    produto << std::endl;
                    produto.close();
                    if(flag == 'N' || flag=='n'){
                        char flag2;
                        std::cout << "Deseja cadastrar mais produtos (S/N)?: ";
                        n = 0;
                         while(n==0) {
                             try{
                                std::cin >> flag2;
                                 if(flag2!='S' && flag2!='s' && flag2!='N' && flag2!='n')
                                     throw "Resposta invalida! Digite S ou N: "; 
                                 n = 1;
                             } catch(const char *msg) {
                                 std::cout << msg << std::endl;
                                 n = 0;
                             }
                         }  
                        if(flag2 == 'N' || flag2 == 'n'){
                            std::cout << "Aplicacao encerrada" << std::endl;
                            saida = false;
                        }
                            
                        break;
                    }
                }
                 moletomcliente.close();
            }
            break;

            case 2:{
                std::cout << "Entre com a id do produto: ";
                std::cin >> idProduto;
                std::cout << "Entre com o preco do produto: ";
                std::cin >> precoCamisa;
                camisaCliente << "***Camisa CCP***" << std::endl;
                camisaCliente << "Preco: R$" << precoCamisa << std::endl;
                camisaCliente << "Tamanhos Disponiveis: ";
                while(true){
                    char flag;
                    std::ofstream produto("camisa.txt", std::ios::app);
                    produto << "***Cadastrando Camisas***" << std::endl;
                    produto << "idProduto: " << idProduto << std::endl;

                    std::cout << "Entre com o tamanho do produto (P/M/G): ";
                    n = 0;
                         while(n==0) {
                             try{
                                std::cin >> tamanhoProduto;
                                 if(tamanhoProduto!='P' && tamanhoProduto!='M' && tamanhoProduto!='G')
                                     throw "Resposta invalida! Digite P, M ou G: "; 
                                 n = 1;
                             } catch(const char *msg) {
                                 std::cout << msg << std::endl;
                                 n = 0;
                             }
                         }

                    produto << "tamanhoProduto: " << tamanhoProduto << std::endl;
                    produto << "precoProduto: R$" << precoCamisa << std::endl;

                    camisaCliente << tamanhoProduto << " ";

                    std::cout << "Entre com a quantidade desse produto: ";
                    std::cin >> quantidade;
                    
                    if(tamanhoProduto == 'P'){
                        qt_camisa_P += quantidade;
                    }

                    else if(tamanhoProduto == 'M'){
                        qt_camisa_M += quantidade;
                    }

                    else if(tamanhoProduto == 'G'){
                        qt_camisa_G += quantidade;
                    }

                    produto << quantidade << " unidades" << std::endl;
                    std::cout << "Deseja cadastrar mais tamanhos (S/N)?: ";
                    n = 0;
                         while(n==0) {
                             try{
                                std::cin >> flag;
                                 if(flag!='S' && flag!='s' && flag!='N' && flag!='n')
                                     throw "Resposta invalida! Digite S ou N: "; 
                                 n = 1;
                             } catch(const char *msg) {
                                 std::cout << msg << std::endl;
                                 n = 0;
                             }
                         }  
                    produto << std::endl;
                    produto.close();
                    if(flag == 'N' || flag == 'n') {
                        char flag2;
                        std::cout << "Deseja cadastrar mais produtos (S/N)?: ";
                        n = 0;
                         while(n==0) {
                             try{
                                std::cin >> flag2;
                                 if(flag2!='S' && flag2!='s' && flag2!='N' && flag2!='n')
                                     throw "Resposta invalida! Digite S ou N: "; 
                                 n = 1;
                             } catch(const char *msg) {
                                 std::cout << msg << std::endl;
                                 n = 0;
                             }
                         }  
                        if(flag2 == 'N' || flag2 == 'n'){
                            std::cout << "***Aplicacao encerrada***" << std::endl;
                            saida = false;
                        }
                            
                        break;
                    }
                }
                camisaCliente.close();
            }
            break;

            case 3:{
                std::cout << "Entre com a id do produto: ";
                std::cin >> idProduto;
                std::cout << "Entre com o preco do produto: ";
                std::cin >> precoCaneca;
                canecaCliente << "***Caneca CCP***" << std::endl;
                canecaCliente << "Preco: R$" << precoCaneca << std::endl;
                canecaCliente << "Tamanho: U" << std::endl;
                while(true){
                    char flag;
                    std::ofstream produto("caneca.txt", std::ios::app);
                    produto << "***Cadastrando Canecas***" << std::endl;
                    produto << "idProduto: " << idProduto << std::endl;
                    produto << "tamanhoProduto: " << 'U' << std::endl;
                    produto << "precoProduto: R$" << precoCaneca << std::endl;
                    std::cout << "Entre com a quantidade desse produto: ";
                    std::cin >> quantidade;
                    
                    qt_caneca += quantidade;

                    produto << quantidade << " unidades" << std::endl;
                    produto << std::endl;
                    produto.close();
                    char flag2;
                    std::cout << "Deseja cadastrar mais produtos (S/N)?: ";
                    n = 0;
                         while(n==0) {
                             try{
                                std::cin >> flag2;
                                 if(flag2!='S' && flag2!='s' && flag2!='N' && flag2!='n')
                                     throw "Resposta invalida! Digite S ou N: "; 
                                 n = 1;
                             } catch(const char *msg) {
                                 std::cout << msg << std::endl;
                                 n = 0;
                             }
                         } 
                    if(flag2 == 'N' || flag2 == 'n'){
                        std::cout << "***Aplicacao encerrada***" << std::endl;
                        saida = false;
                    }
                            
                    break;
                    
                }
                canecaCliente.close();
            }
            break;

            case 4:{
                std::cout << "Entre com a id do produto: ";
                std::cin >> idProduto;
                std::cout << "Entre com o preco do produto: ";
                std::cin >> precoTirante;
                tiranteCliente << "***Tirante CCP***" << std::endl;
                tiranteCliente << "Preco: R$" << precoTirante << std::endl;
                tiranteCliente << "Tamanho: U" << std::endl;
                while(true){
                    char flag;
                    std::ofstream produto("tirante.txt", std::ios::app);
                    produto << "***Cadastrando Tirantes***" << std::endl;
                    produto << "idProduto: " << idProduto << std::endl;
                    produto << "tamanhoProduto: " << 'U' << std::endl;
                    produto << "precoProduto: R$" << precoTirante << std::endl;
                    std::cout << "Entre com a quantidade desse produto: ";
                    std::cin >> quantidade;

                    qt_tirante += quantidade;

                    produto << quantidade << " unidades" << std::endl;
                    produto << std::endl;
                    produto.close();
                    char flag2;
                    std::cout << "Deseja cadastrar mais produtos (S/N)?: ";
                    n = 0;
                         while(n==0) {
                             try{
                                std::cin >> flag2;
                                 if(flag2!='S' && flag2!='s' && flag2!='N' && flag2!='n')
                                     throw "Resposta invalida! Digite S ou N: "; 
                                 n = 1;
                             } catch(const char *msg) {
                                 std::cout << msg << std::endl;
                                 n = 0;
                             }
                         }  
                    if(flag2 == 'N' || flag2 == 'n'){
                        std::cout << "***Aplicacao encerrada***" << std::endl;
                        saida = false;
                    }
                            
                    break;
                    
                }
                tiranteCliente.close();
            }
            break;
        }
    }
}

void Produto::removerProduto(){

}