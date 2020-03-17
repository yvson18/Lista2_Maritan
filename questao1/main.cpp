#include <iostream>

#include "ContaEspecial.h"
#include "Conta.h"

using namespace std;

int main(){

    Conta BDB("Tony Stark",500000,"1256",1000000);

    BDB.sacar(1000);
    cout << BDB.getsaldo()<< endl;
    BDB.depositar(1000);
    cout << BDB.getsaldo()<< endl;

    BDB.definirLimite();

    cout << BDB.getlimite()<< endl;

    cout << "\n\n";

    Conta itau("Steve Rogers",200000,"1257",100000);


    itau.sacar(1000);
    cout << itau.getsaldo()<< endl;
    itau.depositar(1000);
    cout << itau.getsaldo()<< endl;

    itau.definirLimite();

    cout << itau.getlimite()<< endl;

    return 0;
}