#include "SistemaGerenciaFolha.h"
#include <iostream>



SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamentoMaximo){
    this->orcamentoMaximo = orcamentoMaximo;
}

void SistemaGerenciaFolha::setFuncionario(std::vector <Funcionario*> funcionarios){
    this->funcionarios = funcionarios;
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double soma = 0;

        for(int i = 0; i < this->funcionarios.size();i++){
            soma += this->funcionarios[i]->calculaSalario();
        }

    if(soma > this->orcamentoMaximo){
        throw OrcamentoEstouradoException();

    }else{
        return soma;
    }    
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome){

    int cont = 0;
        for(int i = 0; i < funcionarios.size(); i++){
            if(funcionarios[i]->getNome() == nome){
                return funcionarios[i]->calculaSalario();
                break;
            }
            cont++;
        }
        
        if(cont == funcionarios.size()){
            throw FuncionarioNaoExisteException("Funcionario nao existente");
        }
}

