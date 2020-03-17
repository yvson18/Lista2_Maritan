#include "Assalariado.h"


void Assalariado::setSalario(double salario){
    this->salario = salario;
}

Assalariado::Assalariado(std::string nome,int matricula,double salario): Funcionario(nome,matricula){
    this->salario = salario;
}

double Assalariado::calculaSalario(){
    return this->salario;
}