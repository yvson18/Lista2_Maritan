#include "Pedido.h"

Pedido::Pedido(int num,int qnt,std::string desc,double pre){
    numero = num;
    quantidade = qnt;
    descricao = desc;
    precoItem = pre;
}
void Pedido::setNum(int n){numero = n;}
void Pedido::setQnt(int q){quantidade = q;}
void Pedido::setPreco(float p){precoItem = p;}
void Pedido::setDescricao(std::string d){descricao = d;}
int Pedido::getNum(){return numero;}
int Pedido::getQnt(){return quantidade;}
float Pedido::getPreco(){return precoItem;}
std::string Pedido::getDescricao(){return descricao;}

