#include "Horista.h"


Horista::Horista(std::string nome,int matricula,double salarioPorHora,double horasTrabalhadas): Funcionario(nome,matricula){
    this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}

void Horista::setSalarioPorHora(double salarioPorHora){
    this->salarioPorHora = salarioPorHora;
}
void Horista::setHorasTrabalhadas(double horasTrabalhadas){
    this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::calculaSalario(){
    return 1.5 * salarioPorHora;
}