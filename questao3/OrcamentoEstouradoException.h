#ifndef ORCAMENTOESTOURADOEXCEPTION_
#define ORCAMENTOESTOURADOEXCEPTION_

#include <string.h>
#include <stdexcept>

class OrcamentoEstouradoException:  public std::exception{

     private:
        char mensagem[100];

    public:

        OrcamentoEstouradoException(){
            strcpy(mensagem,"Orcamento estourado!");
        }        

        const char* what(){
            return mensagem;
        }


    
};

#endif