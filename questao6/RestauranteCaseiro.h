#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"
#include <vector>
#define TM 2

class RestauranteCaseiro
{
    private:
        MesaDeRestaurante mesas[TM];

    public:
        void adicionaAOPedido(Pedido ped,int nuMesa);
        double calculaTotalRestaurante();
        void zeraPedidos_2(int nuMesa);


};

#endif // RESTAURANTECASEIRO_H
