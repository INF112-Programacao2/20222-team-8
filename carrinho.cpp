#include "carrinho.h"
#include <iostream>
#include <fstream>

Carrinho::Carrinho(int qualproduto, char tamanho_moletom, int unidades_moletom_P) :
    _qualproduto(qualproduto), _tamanho_moletom(tamanho_moletom), _unidades_moletom_P(unidades_moletom_P) {}

int Carrinho::get_unidade_moletom_P() {
    return _unidades_moletom_P;
}

int Carrinho::get_unidade_moletom_M() {
    return _unidades_moletom_M;
}

int Carrinho::get_unidade_moletom_G() {
    return _unidades_moletom_G;
}

int Carrinho::get_unidade_camisa_P() {
    return _unidades_camisa_P;
}

int Carrinho::get_unidade_camisa_M() {
    return _unidades_camisa_M;
}

int Carrinho::get_unidade_camisa_G() {
    return _unidades_camisa_G;
}

int Carrinho::get_unidade_caneca() {
    return _unidades_caneca;
}

int Carrinho::get_unidade_tirante() {
    return _unidades_tirante;
}

int Carrinho::get_qualproduto() {
    return _qualproduto;
}

char Carrinho::get_tamanho_moletom() {
    return _tamanho_moletom;
}

char Carrinho::get_tamanho_camisa() {
    return _tamanho_camisa;
}

void Carrinho::set_qualproduto(int qualproduto) {
    _qualproduto = qualproduto;
}

void Carrinho::set_tamanho_moletom(char tamanho_moletom) {
    _tamanho_moletom = tamanho_moletom;
}

void Carrinho::set_tamanho_camisa(char tamanho_camisa) {
    _tamanho_camisa = tamanho_camisa;
}

void Carrinho::set_unidade_moletom_P(int unidades_moletom_P) {
    _unidades_moletom_P = unidades_moletom_P;
}

void Carrinho::set_unidade_moletom_M(int unidades_moletom_M) {
    _unidades_moletom_M = unidades_moletom_M;
}

void Carrinho::set_unidade_moletom_G(int unidades_moletom_G) {
    _unidades_moletom_G = unidades_moletom_G;
}

void Carrinho::set_unidade_camisa_P(int unidades_camisa_P) {
    _unidades_camisa_P = unidades_camisa_P;
}

void Carrinho::set_unidade_camisa_M(int unidades_camisa_M) {
    _unidades_camisa_M = unidades_camisa_M;
}

void Carrinho::set_unidade_camisa_G(int unidades_camisa_G) {
    _unidades_camisa_G = unidades_camisa_G;
}

void Carrinho::set_unidade_caneca(int unidades_caneca) {
    _unidades_caneca = unidades_caneca;
}

void Carrinho::set_unidade_tirante(int unidades_tirante) {
    _unidades_tirante = unidades_tirante;
}



void Carrinho::adicionarProdutos() {

    std::ofstream arquivo_pedido("pedido.txt", std::ios::app);

    Produto qt;
    Carrinho c(1, 'P', 10);
    std::cout << "Qual produto?\nDigite 1 - Moletom | Digite 2 - Camisa | Digite 3 - Caneca | Digite 4 - Tirante: ";
    int n = 0;
    while (n == 0) {
        try {
            std::cin >> _qualproduto;
            if (_qualproduto != 1 && _qualproduto != 2 && _qualproduto != 3 && _qualproduto != 4)
                throw "Resposta invalida! Digite um numero que corresponda a um produto: ";
            n = 1;
        }
        catch (const char* msg) {
            std::cout << msg << std::endl;
            n = 0;
        }
    }

    switch (_qualproduto) {
    case 1: {
        std::cout << "Qual tamanho (P/M/G)?: ";
        n = 0;
        while (n == 0) {
            try {
                std::cin >> _tamanho_moletom;
                if (_tamanho_moletom != 'P' && _tamanho_moletom != 'M' && _tamanho_moletom != 'G')
                    throw "Resposta invalida! Digite P, M ou G: ";
                n = 1;
            }
            catch (const char* msg) {
                std::cout << msg << std::endl;
                n = 0;
            }
        }

        switch (_tamanho_moletom) {
        case 'P': {
            std::cout << "Quantas unidades? ";
            n = 0;
            while (n == 0) {
                try {
                    std::cin >> _unidades_moletom_P;
                    if (_unidades_moletom_P > qt_moletom_P)
                        throw "Quantidade maior do que a disponivel em estoque - ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg << qt_moletom_P << " em estoque: ";
                    n = 0;
                }

                try {
                    if (_unidades_moletom_P <= 0)
                        throw "Quantidade deve ser maior que 0: ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg;
                    n = 0;
                }

            }
            arquivo_pedido << "Moletom P - " << _unidades_moletom_P << "\n";

        }
                break;
        case 'M': {
            std::cout << "Quantas unidades? ";
            n = 0;
            while (n == 0) {
                try {
                    std::cin >> _unidades_moletom_M;
                    if (_unidades_moletom_M > qt.getQtMoletomM())
                        throw "Quantidade maior do que a disponivel em estoque - ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg << qt.getQtMoletomM() << " em estoque: ";
                    n = 0;
                }

                try {
                    if (_unidades_moletom_M <= 0)
                        throw "Quantidade deve ser maior que 0: ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg;
                    n = 0;
                }
            }
            arquivo_pedido << "Moletom M - " << _unidades_moletom_M << "\n";
        }
                break;
        case 'G': {
            std::cout << "Quantas unidades? ";
            n = 0;
            while (n == 0) {
                try {
                    std::cin >> _unidades_moletom_G;
                    if (_unidades_moletom_G > qt.getQtMoletomG())
                        throw "Quantidade maior do que a disponivel em estoque - ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg << qt.getQtMoletomG() << " em estoque: ";
                    n = 0;
                }

                try {
                    if (_unidades_moletom_G <= 0)
                        throw "Quantidade deve ser maior que 0: ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg;
                    n = 0;
                }
            }
            arquivo_pedido << "Moletom G - " << _unidades_moletom_G << "\n";
        }
                break;
        }

    }
          break;

    case 2: {
        std::cout << "Qual tamanho (P/M/G)? ";
        n = 0;
        while (n == 0) {
            try {
                std::cin >> _tamanho_camisa;
                if (_tamanho_camisa != 'P' && _tamanho_camisa != 'M' && _tamanho_camisa != 'G')
                    throw "Resposta invalida! Digite P, M ou G: ";
                n = 1;
            }
            catch (const char* msg) {
                std::cout << msg << std::endl;
                n = 0;
            }
        }

        switch (_tamanho_camisa) {
        case 'P': {
            std::cout << "Quantas unidades? ";
            //std::cin >> _unidades;

            n = 0;
            while (n == 0) {
                try {
                    std::cin >> _unidades_camisa_P;
                    if (_unidades_camisa_P > qt.getQtCamisaP())
                        throw "Quantidade maior do que a disponivel em estoque - ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg << qt.getQtCamisaP() << " em estoque: ";
                    n = 0;
                }

                try {
                    //std::cin >> _unidades;
                    if (_unidades_camisa_P <= 0)
                        throw "Quantidade deve ser maior que 0: ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg;
                    n = 0;
                }

            }
            arquivo_pedido << "Camisa P - " << _unidades_camisa_P << "\n";
        }
                break;
        case 'M': {
            std::cout << "Quantas unidades? ";
            //std::cin >> _unidades;

            n = 0;
            while (n == 0) {
                try {
                    std::cin >> _unidades_camisa_M;
                    if (_unidades_camisa_M > qt.getQtCamisaM())
                        throw "Quantidade maior do que a disponivel em estoque - ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg << qt.getQtCamisaM() << " em estoque: ";
                    n = 0;
                }

                try {
                    //std::cin >> _unidades;
                    if (_unidades_camisa_M <= 0)
                        throw "Quantidade deve ser maior que 0: ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg;
                    n = 0;
                }

            }
            arquivo_pedido << "Camisa M - " << _unidades_camisa_M << "\n";

        }
                break;
        case 'G': {
            std::cout << "Quantas unidades? ";
            //std::cin >> _unidades;

            n = 0;
            while (n == 0) {
                try {
                    std::cin >> _unidades_camisa_G;
                    if (_unidades_camisa_G > qt.getQtCamisaG())
                        throw "Quantidade maior do que a disponivel em estoque - ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg << qt.getQtCamisaG() << " em estoque: ";
                    n = 0;
                }

                try {
                    //std::cin >> _unidades;
                    if (_unidades_camisa_G <= 0)
                        throw "Quantidade deve ser maior que 0: ";
                    n = 1;
                }
                catch (const char* msg) {
                    std::cout << msg;
                    n = 0;
                }

            }
            arquivo_pedido << "Camisa G - " << _unidades_camisa_G << "\n";
        }
                break;

        }
    }
          break;

    case 3: {
        std::cout << "Quantas unidades? ";
        //std::cin >> _unidades;

        n = 0;
        while (n == 0) {
            try {
                std::cin >> _unidades_caneca;
                if (_unidades_caneca > qt.getQtCaneca())
                    throw "Quantidade maior do que a disponivel em estoque - ";
                n = 1;
            }
            catch (const char* msg) {
                std::cout << msg << qt.getQtCaneca() << " em estoque: ";
                n = 0;
            }

            try {
                //std::cin >> _unidades;
                if (_unidades_caneca <= 0)
                    throw "Quantidade deve ser maior que 0: ";
                n = 1;
            }
            catch (const char* msg) {
                std::cout << msg;
                n = 0;
            }

        }
        arquivo_pedido << "Canecas - " << _unidades_caneca << "\n";

    }
          break;

    case 4: {
        std::cout << "Quantas unidades? ";
        //std::cin >> _unidades;

        n = 0;
        while (n == 0) {
            try {
                std::cin >> _unidades_tirante;
                if (_unidades_tirante > qt.getQtCamisaP())
                    throw "Quantidade maior do que a disponivel em estoque - ";
                n = 1;
            }
            catch (const char* msg) {
                std::cout << msg << qt.getQtCamisaP() << " em estoque: ";
                n = 0;
            }

            try {
                //std::cin >> _unidades;
                if (_unidades_tirante <= 0)
                    throw "Quantidade deve ser maior que 0: ";
                n = 1;
            }
            catch (const char* msg) {
                std::cout << msg;
                n = 0;
            }

        }
        arquivo_pedido << "Tirante - " << _unidades_tirante << "\n";
    }
          break;

    }
}
double  Carrinho::calculaTotalCompra() {
    double x;
    switch (get_qualproduto()) {
    case 1: {
        if (get_tamanho_moletom() == 'P') {
            return getPrecoMoletom() * get_unidade_moletom_P();
        }
        else if (get_tamanho_moletom() == 'M') {
            x = getPrecoMoletom() * get_unidade_moletom_M();
        }
        else {
            x = getPrecoMoletom() * get_unidade_moletom_G();
            std::cout << x;
        }
        std::cout << std::endl;
    }
          break;

    case 2: {
        if (get_tamanho_camisa() == 'P') {
            return getPrecoCamisa() * get_unidade_camisa_P();
        }
        else if (get_tamanho_camisa() == 'M') {
            return getPrecoCamisa() * get_unidade_camisa_M();
        }
        else
            return getPrecoCamisa() * get_unidade_camisa_G();
        std::cout << std::endl;
    }
          break;

    case 3: {
        return getPrecoCaneca() * get_unidade_caneca();
        std::cout << std::endl;
    }
          break;

    case 4: {
        return getPrecoTirante() * get_unidade_tirante();
        std::cout << std::endl;
        break;
    }

    }
}

