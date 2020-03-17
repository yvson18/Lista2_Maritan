#ifndef HORISTAS_
#define HORISTAS_

#include "Funcionario.h"

class Horista: public Funcionario{

    private:
        double salarioPorHora, horasTrabalhadas;

    public:
        Horista(std::string,int,double,double);

        double getSalarioPorHora(){return this->salarioPorHora;}
        double getHorasTrabalhadas(){return this->horasTrabalhadas;}

        void setSalarioPorHora(double);
        void setHorasTrabalhadas(double);

        double calculaSalario()override;


};

#endif