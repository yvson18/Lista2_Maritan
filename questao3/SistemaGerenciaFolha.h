#ifndef SISTEMAGERENCIAFOLHA_
#define SISTEMAGERENCIAFOLHA_

#include <vector>
#include "Funcionario.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"


class SistemaGerenciaFolha{

    private:

        std::vector <Funcionario*> funcionarios;
        double orcamentoMaximo;

    public:

        SistemaGerenciaFolha(double);
        SistemaGerenciaFolha(){}
        void setFuncionario(std::vector <Funcionario*>);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(std::string);
};

#endif