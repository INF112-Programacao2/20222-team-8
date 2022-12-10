#include "carrinho.h"
#include <iostream>

void Carrinho::adicionarProdutos() {

    std::cout << "Qual produto?\nDigite 1 - Moletom\nDigite 2 - Camisa\nDigite 3 - Caneca\nDigite 4 - Tirante\n";
         int n=0;           
             while(n==0) {
                 try{
                     std::cin >> _qualproduto;
                     if(_qualproduto!=1 && _qualproduto!=2 && _qualproduto!=3 && _qualproduto!=4)
                         throw "Resposta invalida! Digite um numero que corresponda a um produto: "; 
                     n = 1;
                 } catch(const char *msg) {
                     std::cout << msg << std::endl;
                     n = 0;
                 }
             }
                
             switch(_qualproduto) {
                 case 1: {
                     std::cout << "Qual tamanho (P/M/G)? ";
                         n = 0;
                         while(n==0) {
                             try{
                                std::cin >> _tamanho;
                                 if(_tamanho!='P' && _tamanho!='M' && _tamanho!='G')
                                     throw "Resposta invalida! Digite P, M ou G: "; 
                                 n = 1;
                             } catch(const char *msg) {
                                 std::cout << msg << std::endl;
                                 n = 0;
                             }
                         }  

                         switch(_tamanho) {
                            case 'P': {
                                 std::cout << "Quantas unidades? ";
                                 std::cin >> _unidades;
                            }
                            break;
                            case 'M': {
                                 std::cout << "Quantas unidades? ";
                                 std::cin >> _unidades;
                            }
                            break;
                            case 'G': {
                                 std::cout << "Quantas unidades? ";
                                 std::cin >> _unidades;
                            }
                            break;
                         }

                 }
                 break;

                 case 2: {
                     std::cout << "Qual tamanho (P/M/G)? ";
                         n = 0;
                         while(n==0) {
                             try{
                                std::cin >> _tamanho;
                                 if(_tamanho!='P' && _tamanho!='M' && _tamanho!='G')
                                     throw "Resposta invalida! Digite P, M ou G: "; 
                                 n = 1;
                             } catch(const char *msg) {
                                 std::cout << msg << std::endl;
                                 n = 0;
                             }
                         }  

                         switch(_tamanho) {
                            case 'P': {
                                 std::cout << "Quantas unidades? ";
                                 std::cin >> _unidades;
                            }
                            break;
                            case 'M': {
                                 std::cout << "Quantas unidades? ";
                                 std::cin >> _unidades;
                            }
                            break;
                            case 'G': {
                                 std::cout << "Quantas unidades? ";
                                 std::cin >> _unidades;
                            }
                            break;

                         }
                 }
                 break;
                 
                 case 3: {
                     std::cout << "Quantas unidades? ";
                     std::cin >> _unidades;
                 }
                 break;
                
                 case 4: {
                     std::cout << "Quantas unidades? ";
                     std::cin >> _unidades;
                 }
                 break;

             }
}