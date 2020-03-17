#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido{

    private:
        int numero,quantidade = 0;
        float precoItem = 0;
        std::string descricao;
    public:
        Pedido(){};
        Pedido(int,int,std::string,double);
        void setNum(int);
        void setQnt(int);
        void setPreco(float);
        void setDescricao(std::string);
        int getNum();
        int getQnt();
        float getPreco();
        std::string getDescricao();

};
#endif // PEDIDO_H


