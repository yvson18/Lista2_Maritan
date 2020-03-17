#ifndef FUNCIONARIO_
#define FUNCIONARIO_
#include <string>

class Funcionario{

    protected:
        std::string nome;
        int matricula;

    public:

        Funcionario(std::string,int);

        std::string getNome(){return this->nome;}
        int getMatricula(){return this->matricula;}

        void setNome(std::string nome);
        void setMatricula(int matricula);

        virtual double calculaSalario() = 0;
        


};

#endif