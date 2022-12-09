#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
    protected:
        int idProduto;
        int quantidade;
        char tamanhoProduto;
        double precoProduto;
    public:
        int getIdProduto();
        int getQuantidade();
        char getTamanhoProduto();
        double getPrecoProduto();
        void cadastraProduto();
        void removerProduto();
        void listaProduto();
};

#endif