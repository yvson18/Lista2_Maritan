#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"
#define TM 2

void RestauranteCaseiro::adicionaAOPedido(Pedido ped,int nuMesa){
   mesas[nuMesa-1].adicionaPedido(ped);
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    double total = 0;
    for(int i = 0; i < TM; i ++){
        total += mesas[i].calculatotal();
    }
    return total;
}
void RestauranteCaseiro::zeraPedidos_2(int nuMesa){
     mesas[nuMesa-1].zeraPedidos();
}
