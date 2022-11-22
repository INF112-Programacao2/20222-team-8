#ifndef CARRINHO_H
#define CARRINHO_H

class Carrinho: public Pedido {
public:
  void adicionarProdutos();
  void removerProdutos();
  void listarProdutos();
  void continuarComprando();
  void finalizarCompra();
};

#endif