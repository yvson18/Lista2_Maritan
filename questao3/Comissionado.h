#ifndef COMISSIONADO_
#define COMISSIONADO_

#include "Funcionario.h"

class Comissionado: public Funcionario{

    private:
        double vendasSemanias,percentualComissao,salarioBase;

    public:
        double calculaSalario()override;
        Comissionado(std::string,int,double,double,double);
        
        double getvendasSemanias(){return this->vendasSemanias;}
        double getpercentualComissao(){return this->percentualComissao;}
        double getSalarioBase(){return this->salarioBase;}


        void setVendasSemanias(double);
        void setPercentualComissao(double);
        void setSalarioBase(double);


};

#endif