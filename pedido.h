#ifndef PEDIDO_H
#define PEDIDO_H
#include "carrinho.h"

class Pedido : public Carrinho {
private:    
  int _idPedido;
  double _totalCompra;
public:
  Pedido(int qualproduto, char tamanho_moletom, int unidades_moletom_P, int idPedido);
  void pedido();
  double get_TotalCompra();
};

#endif