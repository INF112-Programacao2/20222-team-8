#include "pedido.h"
#include <iostream>
#include <fstream>

Pedido::Pedido(int qualproduto, char tamanho_moletom, int unidades_moletom_P, int idPedido) :
     Carrinho(qualproduto, tamanho_moletom, unidades_moletom_P), _idPedido(idPedido) {}

/*void Pedido::set_qualproduto(int qualproduto) {
    _qualproduto = qualproduto;
}

void Pedido::set_tamanho(char tamanho_moletom) {
    _tamanho_moletom = tamanho_moletom;
}

void Pedido::set_unidade(int unidades_moletom_P) {
    _unidades_moletom_P = unidades_moletom_P;
}*/

void Pedido::pedido() {
    std::ofstream _pedido("pedido.txt", std::ios::app);
    switch(_qualproduto) {
         case 1: {
             _pedido << "Moletom ";
             if(_tamanho_moletom == 'P') {
                 _pedido << "P - " << _unidades_moletom_P << " unidades";
             }
             else if(_tamanho_moletom == 'M') {
                 _pedido << "M - " << _unidades_moletom_M << " unidades";
             }
             else 
                 _pedido << "G - " << _unidades_moletom_G << " unidades";
             std::cout << std::endl;    
         }
         break;

         case 2: {
             _pedido << "Camisa ";
             if(_tamanho_camisa == 'P') {
                 _pedido << "P - " << _unidades_camisa_P << " unidades";
             }
             else if(_tamanho_camisa == 'M') {
                 _pedido << "M - " << _unidades_camisa_M << " unidades";
             }
             else 
                 _pedido << "G - " << _unidades_camisa_G << " unidades";
             std::cout << std::endl;  
         }
         break;

         case 3: {
             _pedido << "Caneca - ";
                 _pedido << _unidades_caneca << " unidades";
             std::cout << std::endl;  
         }
         break;

         case 4: {
             _pedido << "Tirante - ";
                 _pedido << _unidades_tirante << " unidades";
             std::cout << std::endl;  
         }
         break;
    }
    _pedido.close();
}

double Pedido::get_TotalCompra() {
    return _totalCompra;
}
