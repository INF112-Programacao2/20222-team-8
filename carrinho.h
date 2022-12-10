#ifndef CARRINHO_H
#define CARRINHO_H
#include "produto.h"

class Carrinho: public Produto {
private:
   int _qualproduto;
   char _tamanho;
   int _unidades;
public:
  void adicionarProdutos();
  void removerProdutos();
  void listarProdutos();
  void continuarComprando();
  void finalizarCompra();
};

#endif