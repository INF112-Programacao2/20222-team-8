#ifndef PEDIDO_H
#define PEDIDO_H
#include "produto.h"

class Pedido : public Produto {
private:    
  int _idPedido;
  double _totalCompra;
public:
 // Pedido(int idPedido);
  bool produtoEstaEmEstoque();
  void calculaTotalCompra();
  double get_TotalCompra();
};

#endif