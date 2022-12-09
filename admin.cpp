#include <iostream>
#include <fstream>
#include <string>
#include "produto.h"

int main(){

    int resposta;
    std::cout << "******Seja bem-vindo/a (admin)******" << std::endl;
    std::cout << "O que deseja fazer:" << std::endl;
    std::cout << "1 - Adicionar Produtos | 2 - Remover Produtos | 3 - Sair: ";
    std::cin >> resposta;

    // std::string linha;
    // std::ifstream fin("moletom.txt");
    // if(fin.is_open())
    //     while(getline(fin,linha))
    //         std::cout << linha << std::endl;

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

    return 0;
}