#include <iostream>

#include "ContaEspecial.h"
#include "Conta.h"
#include "SaldoNaoDisponivelException.h" 

using namespace std;

int main(){

    Conta BDB("Tony Stark",500000,"1256",1000000);
    try{
        BDB.sacar(60000000);
        cout << BDB.getsaldo()<< endl;

    }catch(SaldoNaoDisponivelException e){
        cout << e.what()  << endl;
    }

    return 0;

}