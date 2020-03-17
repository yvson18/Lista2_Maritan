#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <exception>
#include <string.h>

class SaldoNaoDisponivelException : public std::exception{

    protected:
        char mensagem[100];
    public:

        SaldoNaoDisponivelException(const char* mensagem){
            strcpy(this->mensagem,mensagem);
        }    
        const char* what(){
                return mensagem;
        } 
};

#endif
