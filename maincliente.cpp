#include <iostream>
#include <fstream>
#include <string>

int main() {

    int resposta, qualproduto;
    char simounao;
    bool erro = false;
    std::string linha;

    std::cout << "\n**********Seja bem-vindo/a ao e-commerce de produtos de Ciencia da Computacao de Vicosa**********\n";
    std::cout << "\nO que deseja fazer?\nDigite 1 - Comecar a comprar\nDigite 2 - Finalizar e sair\n";
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

        std::cout << "Gostaria de adquirir algum produto (Digite S para sim e N para nao)? ";
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

        if (simounao == 'N') {
            std::cout << "Ah que pena, mas obrigado pela visita!";
            return 0;
        }
        else {
            while (true) {
                std::cout << "Qual produto?\nDigite 1 - Moletom\nDigite 2 - Camisa\nDigite 3 - Caneca\nDigite 4 - Tirante\n";
                do {
                    try {
                        std::cin >> qualproduto;
                        if (qualproduto != 1 && qualproduto != 2 && qualproduto != 3 && qualproduto != 4)
                            throw "Resposta invalida! Digite um numero que corresponda a um produto: ";
                    }
                    catch (const char* msg) {
                        std::cout << msg << std::endl;
                        return true;
                    }
                } while (erro);



            }
        }



        /* \nDigite 1 - Moletom\nDigite 2 - Camisa\nDigite 3 - Caneca\nDigite 4 - Tirante\n" <<
         "Caso deseje sair do programa, digite 5";*/
    }

    }


    //Leitura de um arquico para leitura de qtd de itens
    /*string nome, cpf;
    int qtdItens;
    try {
        ofstream arq("cadastro.txt");
        if (arq.is_open()) {
            cout << "Digite o nome: ";
            getline(cin, nome);
            cout << "Digite o CPF: ";
            getline(cin, cpf);
            cout << "Digite a quantidade de itens: ";
            cin >> qtdItens;
            arq << nome << "\n";
            arq << cpf << "\n";
            arq << qtdItens << "\n";
            arq.close();
            cout << "\nCadastro realizado com sucesso!\n";
        }
        else {
            throw "Erro ao abrir o arquivo";
        }
    }
    catch (const char* msg) {
}*/
}