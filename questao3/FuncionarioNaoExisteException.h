#ifndef FUNCIONARIONAOEXISTE_
#define FUNCIONARIONAOEXISTE_

#include <string.h>
#include <stdexcept>

class FuncionarioNaoExisteException: public std::exception {

    private:
        char mensagem[100];

    public:

        FuncionarioNaoExisteException(const char* mensagem){
            strcpy(this->mensagem,mensagem);
        }        

        const char* what(){
            return mensagem;
        }

};

#endif