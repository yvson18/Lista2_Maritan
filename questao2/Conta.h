#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <string>

class Conta : public IConta{

    protected:
        std::string nomeCliente,numeroConta;
        double salarioMensal,saldo,limite; 

    public:
//Construtor
        Conta(std::string nomeCliente,double salarioMensal,std::string numeroConta,double saldo);

//Sets    
        void setnomeCliente(std::string nomeCliente){this->nomeCliente = nomeCliente;}
        void setnumeroConta(){this->numeroConta = numeroConta;} 
        void setsalarioMensal(){this->salarioMensal = salarioMensal;}
        void setsaldo(){this->saldo = saldo;} 
        void setlimite(){this->limite = limite;}
//Gets
        std::string getnomeCliente(){return this->nomeCliente;}
        std::string getnumeroConta(){return this->numeroConta;}
        double getsalarioMensal(){return this->salarioMensal;} 
        double getsaldo(){return this->saldo;} 
        double getlimite(){return this->limite;}
//Outros Metodos
        virtual void definirLimite();
        void sacar(double valor)override;
        void depositar(double valor)override;

};

#endif