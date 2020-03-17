#include "Conta.h"

Conta::Conta(std::string nomeCliente,double salarioMensal,std::string numeroConta,double saldo){
    this->nomeCliente = nomeCliente;
    this->salarioMensal = salarioMensal;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}

void Conta::definirLimite(){
    this->limite  = 2 * salarioMensal;
}
void Conta::sacar(double valor){
    this->saldo = saldo - valor;
}

void Conta::depositar(double valor){
    this->saldo = saldo + valor;
}
