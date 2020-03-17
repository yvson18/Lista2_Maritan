#include "Comissionado.h"

void Comissionado::setVendasSemanias(double vendasSemanais){
    this->vendasSemanias = vendasSemanias;
}
void Comissionado::setPercentualComissao(double percentualComissao){
    this->percentualComissao = percentualComissao;
}

void Comissionado::setSalarioBase(double salarioBase){
    this->salarioBase = salarioBase;
}


 Comissionado::Comissionado(std::string nome,int matricula,double vendasSemanais,double percentualComissao,double salarioBase): 
 Funcionario(nome,matricula){

     this->vendasSemanias = vendasSemanias;
     this->percentualComissao = percentualComissao;
     this->salarioBase = salarioBase;

}

double  Comissionado::calculaSalario(){
    return this->salarioBase + (this->vendasSemanias * (this->percentualComissao/100));
}