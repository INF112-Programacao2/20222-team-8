#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
    protected:
        int idProduto;
        int quantidade;
        //Quantidade moletom
        int qt_moletom_P = 10;
        int qt_moletom_M = 10;
        int qt_moletom_G = 10;
        //Quantidade moletom
        int qt_camisa_P = 10;
        int qt_camisa_M = 10;
        int qt_camisa_G = 10;
        //Quantidade caneca
        int qt_caneca = 10;
        //Quantidade tirante
        int qt_tirante = 10;


        char tamanhoProduto;

        double precoMoletom = 10;
        double precoCamisa = 10;
        double precoCaneca = 10;
        double precoTirante = 10;

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

        double getPrecoMoletom();
        double getPrecoCamisa();
        double getPrecoCaneca();
        double getPrecoTirante();
        void cadastraProduto();
        void removerProduto();
        void listaProduto();
};

#endif