#ifndef CARRINHO_H
#define CARRINHO_H
#include "produto.h"

class Carrinho: public Produto {
protected:
   int _qualproduto;
   char _tamanho_moletom;
   char _tamanho_camisa;
   int _unidades_moletom_P;
   int _unidades_moletom_M;
   int _unidades_moletom_G;
   int _unidades_camisa_P;
   int _unidades_camisa_M;
   int _unidades_camisa_G;
   int _unidades_caneca;
   int _unidades_tirante;
public:
  // CONSTRUTORES
  Carrinho(int qualproduto, char tamanho_moletom, int unidades_moletom_P);
  Carrinho(int qualproduto, int unidades_caneca);

  // FUNÇÕES SET
  void set_qualproduto(int qualproduto);
  void set_tamanho_moletom(char tamanho_moletom);
  void set_tamanho_camisa(char tamanho_camisa);
  void set_unidade_moletom_P(int unidades_moletom_P);
  void set_unidade_moletom_M(int unidades_moletom_M);
  void set_unidade_moletom_G(int unidades_moletom_G);
  void set_unidade_camisa_P(int unidades_camisa_P);
  void set_unidade_camisa_M(int unidades_camisa_M);
  void set_unidade_camisa_G(int unidades_camisa_G);
  void set_unidade_caneca(int unidades_caneca);
  void set_unidade_tirante(int unidades_tirante);


  void adicionarProdutos();
  void removerProdutos();
  void listarProdutos();
  void continuarComprando();
  void finalizarCompra();
  double calculaTotalCompra();

  // FUNÇÕES GET
  int get_unidade_moletom_P();
  int get_unidade_moletom_M();
  int get_unidade_moletom_G();
  int get_unidade_camisa_P();
  int get_unidade_camisa_M();
  int get_unidade_camisa_G();
  int get_unidade_caneca();
  int get_unidade_tirante();
  int get_qualproduto();
  char get_tamanho_moletom();
  char get_tamanho_camisa();
};

#endif