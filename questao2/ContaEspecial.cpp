#include "ContaEspecial.h"


ContaEspecial::ContaEspecial(std::string nomeCliente, double salarioMensal,std::string numeroConta,double saldo):
    Conta(nomeCliente,salarioMensal,numeroConta,saldo){}

void ContaEspecial::definirLimite(){
    limite = 3 * salarioMensal;
}
