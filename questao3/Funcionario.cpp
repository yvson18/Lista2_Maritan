#include "Funcionario.h"
#include <iostream>

 Funcionario::Funcionario(std::string nome,int matricula){
     this->nome = nome;
     this->matricula = matricula;
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}

void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}
        




