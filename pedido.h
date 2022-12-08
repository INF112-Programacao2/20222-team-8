#ifndef PEDIDO_H
#define PEDIDO_H

class Pedido {
private:    
  int _idPedido;
  int _dataDaCompra;
  double _totalCompra;
public:
  Pedido(int idPedido);
  bool produtoEstaEmEstoque();
  void calculaTotalCompra();
  double get_TotalCompra();
};

#endif