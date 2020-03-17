#include <iostream>
#include <vector>

#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"
#include "Horista.h"
#include "Assalariado.h"
#include "Comissionado.h"


using namespace std;


int main(){

    vector <Funcionario*> funcionarios;

    funcionarios.push_back(new Horista("Dagoberto",2506,2000,10));
    funcionarios.push_back(new Assalariado("Tomate",456,5000));
    funcionarios.push_back(new Comissionado("Showder",465,400,50,102));

    SistemaGerenciaFolha s1(90000);

    s1.setFuncionario(funcionarios);

    try{

      cout << s1.consultaSalarioFuncionario("flex")<< endl;

    }catch(FuncionarioNaoExisteException e){
        cout << e.what() << endl;
    }


/*
   try{

      cout << s1.calculaValorTotalFolha()<< endl;

    }catch(OrcamentoEstouradoException orc){
        cerr << orc.what() << endl;
    }
*/

/*  sem erro 

    cout << s1.consultaSalarioFuncionario("Dagoberto") << endl;
    cout << s1.calculaValorTotalFolha()<< endl;

*/

    return 0;
}