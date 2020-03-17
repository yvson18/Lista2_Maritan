#ifndef ASSALRIADO_
#define ASSALIRADO_
#include "Funcionario.h"

class Assalariado : public Funcionario{

    private:
        double salario;

    public:
        Assalariado(std::string,int,double);

        double getSalario(){return this->salario;}

        void setSalario(double salario);

        double calculaSalario()override;



};

#endif