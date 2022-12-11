#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
    protected:
        int idProduto;
        int quantidade;
        //Quantidade moletom
        int qt_moletom_P = 0;
        int qt_moletom_M = 0;
        int qt_moletom_G = 0;
        //Quantidade moletom
        int qt_camisa_P = 0;
        int qt_camisa_M = 0;
        int qt_camisa_G = 0;
        //Quantidade caneca
        int qt_caneca = 0;
        //Quantidade tirante
        int qt_tirante = 0;


        char tamanhoProduto;
        double precoProduto;
    public:
        int getIdProduto();
        int getQuantidade();
        int getQtMoletomP();
        int getQtMoletomM();
        int getQtMoletomG();
        int getQtCamisaP();
        int getQtCamisaM();
        int getQtCamisaG();
        int getQtCaneca();
        int getQtTirante();
        
        char getTamanhoProduto();
        double getPrecoProduto();
        void cadastraProduto();
        void removerProduto();
        void listaProduto();
};

#endif