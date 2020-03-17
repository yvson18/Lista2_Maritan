#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include <string>
#include <vector>
#include "Pedido.h"
#define TM 2

using namespace std;

class MesaDeRestaurante{

    private:
        Pedido pedido[TM] = {};
        bool disponibilidade = false;
    public:
        MesaDeRestaurante(){};
        bool adicionaPedido(Pedido);
        void zeraPedidos();
        float calculatotal();
        Pedido getPedido(int pos);



};

#endif // MESADERESTAURANTE_H
