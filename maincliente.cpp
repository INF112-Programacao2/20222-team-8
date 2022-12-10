#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

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
    std::cout << "****Preencha Seus Dados Para o Orçamento*****\n";
    using namespace std;
    //Declaracao de variaveis
    string nome, cpf, email;
    int quantidadeItens;

    //Criacao do objeto de arquivo de saida
    ofstream arquivoSaida("dados.txt");

    //Verificacao se o arquivo foi criado com sucesso
    if (!arquivoSaida)
    {
        //Excecao: arquivo nao foi criado
        throw runtime_error("Nao foi possivel criar o arquivo de saida");
    }

    //Entrada de dados pelo usuario
    cout << "Insira o nome: ";
    cin >> nome;
    cout << "Insira o CPF: ";
    cin >> cpf;
    cout << "Insira a quantidade de itens: ";
    cin >> quantidadeItens;

    //Tratamento de excecao: quantidade de itens nao pode ser menor que 20
    if (quantidadeItens < 20)
    {
        throw runtime_error("A quantidade de itens nao pode ser menor que 20");
    }

    cout << "Insira o email: ";
    cin >> email;

    //Gravacao dos dados no arquivo
    arquivoSaida << "Nome: " << nome << endl;
    arquivoSaida << "CPF: " << cpf << endl;
    arquivoSaida << "Quantidade de itens: " << quantidadeItens << endl;
    arquivoSaida << "Email: " << email << endl;

    //Fechamento do arquivo
    arquivoSaida.close();

    
}