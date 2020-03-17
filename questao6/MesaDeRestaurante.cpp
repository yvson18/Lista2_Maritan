#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include <iostream>
#include <vector>


bool MesaDeRestaurante::adicionaPedido(Pedido  ped){

    int posLivre;

    for(int i = 0;i<TM;i++){
        if(ped.getDescricao() == pedido[i].getDescricao()){
            pedido[i].setQnt(pedido[i].getQnt() + 1);// adiciona quantidades a um pedido
            return 1;
        }
    }

    for(posLivre = 0; posLivre < TM; posLivre++){//pega a posicao livre
        if(pedido[posLivre].getDescricao() == ""){
            break;
        }
    }

    pedido[posLivre] = ped;
    return 0;
}

Pedido MesaDeRestaurante::getPedido(int pos){
    return pedido[pos];
}

void MesaDeRestaurante::zeraPedidos(){
    for(int i = 0; i < TM; i++){
            pedido[i].setQnt(0);
            pedido[i].setNum(0);
            pedido[i].setPreco(0);
            pedido[i].setDescricao("");
    }
}

float MesaDeRestaurante::calculatotal(){
    float total = 0;

        for(int i = 0; i < TM; i++){
            total += pedido[i].getQnt()*pedido[i].getPreco();
        }
    return total;
}


