#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
    private:
        int idProduto;
        char tamanhoProduto;
        double precoProduto;
    public:
        void cadastraProduto();
        void removerProduto();
};

#endif