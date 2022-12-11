#include "carrinho.h"
#include <iostream>

void Carrinho::adicionarProdutos() {
    Produto qt;
    std::cout << "Qual produto?\nDigite 1 - Moletom | Digite 2 - Camisa | Digite 3 - Caneca | Digite 4 - Tirante: ";
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
                     std::cout << "Qual tamanho (P/M/G)?: ";
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
                                 //std::cin >> _unidades;
                                 //Produto qt;
                                 n = 0;
                                 while(n==0) {
                                    try{
                                        std::cin >> _unidades;
                                        if(_unidades > qt.getQtMoletomP())
                                            throw "Quantidade maior do que a disponivel em estoque - "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg << qt.getQtMoletomP() << " em estoque: ";
                                        n = 0;
                                    }

                                    try{
                                        //std::cin >> _unidades;
                                        if(_unidades <= 0)
                                            throw "Quantidade deve ser maior que 0: "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg;
                                        n = 0;
                                    }

                                }  

                            }
                            break;
                            case 'M': {
                                 std::cout << "Quantas unidades? ";
                                 //std::cin >> _unidades;
                                 //Produto qt;
                                 n = 0;
                                 while(n==0) {
                                    try{
                                        std::cin >> _unidades;
                                        if(_unidades > qt.getQtMoletomM())
                                            throw "Quantidade maior do que a disponivel em estoque - "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg << qt.getQtMoletomM() << " em estoque: ";
                                        n = 0;
                                    }

                                    try{
                                        //std::cin >> _unidades;
                                        if(_unidades <= 0)
                                            throw "Quantidade deve ser maior que 0: "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg;
                                        n = 0;
                                    }
                                }  
                            }
                            break;
                            case 'G': {
                                 std::cout << "Quantas unidades? ";
                                 std::cin >> _unidades;
                                 n = 0;
                                 while(n==0) {
                                    try{
                                        std::cin >> _unidades;
                                        if(_unidades > qt.getQtMoletomG())
                                            throw "Quantidade maior do que a disponivel em estoque - "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg << qt.getQtMoletomG() << " em estoque: ";
                                        n = 0;
                                    }

                                    try{
                                        //std::cin >> _unidades;
                                        if(_unidades <= 0)
                                            throw "Quantidade deve ser maior que 0: "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg;
                                        n = 0;
                                    }
                                }  
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
                                 //std::cin >> _unidades;
                                 
                                 n = 0;
                                 while(n==0) {
                                    try{
                                        std::cin >> _unidades;
                                        if(_unidades > qt.getQtCamisaP())
                                            throw "Quantidade maior do que a disponivel em estoque - "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg << qt.getQtCamisaP() << " em estoque: ";
                                        n = 0;
                                    }

                                    try{
                                        //std::cin >> _unidades;
                                        if(_unidades <= 0)
                                            throw "Quantidade deve ser maior que 0: "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg;
                                        n = 0;
                                    }

                                }

                            }
                            break;
                            case 'M': {
                                 std::cout << "Quantas unidades? ";
                                 //std::cin >> _unidades;

                                 n = 0;
                                 while(n==0) {
                                    try{
                                        std::cin >> _unidades;
                                        if(_unidades > qt.getQtCamisaM())
                                            throw "Quantidade maior do que a disponivel em estoque - "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg << qt.getQtCamisaM() << " em estoque: ";
                                        n = 0;
                                    }

                                    try{
                                        //std::cin >> _unidades;
                                        if(_unidades <= 0)
                                            throw "Quantidade deve ser maior que 0: "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg;
                                        n = 0;
                                    }

                                }

                            }
                            break;
                            case 'G': {
                                 std::cout << "Quantas unidades? ";
                                 //std::cin >> _unidades;

                                 n = 0;
                                 while(n==0) {
                                    try{
                                        std::cin >> _unidades;
                                        if(_unidades > qt.getQtCamisaG())
                                            throw "Quantidade maior do que a disponivel em estoque - "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg << qt.getQtCamisaG() << " em estoque: ";
                                        n = 0;
                                    }

                                    try{
                                        //std::cin >> _unidades;
                                        if(_unidades <= 0)
                                            throw "Quantidade deve ser maior que 0: "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg;
                                        n = 0;
                                    }

                                }

                            }
                            break;

                         }
                 }
                 break;
                 
                 case 3: {
                     std::cout << "Quantas unidades? ";
                     //std::cin >> _unidades;

                     n = 0;
                            while(n==0) {
                                try{
                                    std::cin >> _unidades;
                                    if(_unidades > qt.getQtCaneca())
                                        throw "Quantidade maior do que a disponivel em estoque - "; 
                                    n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg << qt.getQtCaneca() << " em estoque: ";
                                        n = 0;
                                    }

                                    try{
                                        //std::cin >> _unidades;
                                        if(_unidades <= 0)
                                            throw "Quantidade deve ser maior que 0: "; 
                                        n = 1;
                                    } catch(const char *msg) {
                                        std::cout << msg;
                                        n = 0;
                                    }

                                }

                 }
                 break;
                
                 case 4: {
                     std::cout << "Quantas unidades? ";
                     //std::cin >> _unidades;

                     n = 0;
                     while(n==0) {
                        try{
                            std::cin >> _unidades;
                            if(_unidades > qt.getQtCamisaP())
                                throw "Quantidade maior do que a disponivel em estoque - "; 
                            n = 1;
                        } catch(const char *msg) {
                            std::cout << msg << qt.getQtCamisaP() << " em estoque: ";
                            n = 0;
                        }

                          try{
                            //std::cin >> _unidades;
                            if(_unidades <= 0)
                            throw "Quantidade deve ser maior que 0: "; 
                            n = 1;
                        } catch(const char *msg) {
                            std::cout << msg;
                            n = 0;
                        }

                    }

                 }
                 break;

             }
}