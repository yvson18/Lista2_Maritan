#include <iostream>
#include <string>
#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"
#include "Pedido.h"

using namespace std;

int main()
{
    RestauranteCaseiro rest;

    rest.adicionaAOPedido(Pedido(123,1,"Banana",50),1);

    rest.adicionaAOPedido(Pedido(124,1,"abacate",50),2);

    cout<<rest.calculaTotalRestaurante()<<endl;

    rest.zeraPedidos_2(1);

    cout<<rest.calculaTotalRestaurante()<<endl;




    return 0;
}
