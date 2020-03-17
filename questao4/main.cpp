#include <iostream>
#include <stdexcept>
#include <string.h>

class ValorMuitoAcimaException : public std::exception{
    protected:
        char mensagem[100];  
    
    public:
        ValorMuitoAcimaException(const char* mensagem){
            strcpy(this->mensagem,mensagem);
        }

        const char* what(){return this->mensagem;}
        
};


class ValorAcimaException : public std::exception{
    protected:
        char mensagem[100];  
    
    public:
        ValorAcimaException(const char* mensagem){
            strcpy(this->mensagem,mensagem);
        }

        const char* what(){return this->mensagem;}
        
};


class ValorAbaixoException : public std::exception{
    protected:
        char mensagem[100]; 
    
    public:
        ValorAbaixoException(const char* mensagem){
            strcpy(this->mensagem,mensagem);
        }

        const char* what(){return this->mensagem;}
        
};



class TestaValidaNumero{

    public:
        void validaNumero(int num){
            if(num <= 0){
                throw ValorAbaixoException("Valor abaixo!");
            }else if(num >= 100 &&  num <1000){
                throw ValorAcimaException("Valor acima!");
            }else if(num >=1000){
                throw ValorMuitoAcimaException("Valor muito acima");    
            }else{
                std::cout << "Valor normal?"<<std::endl;
            }
        }
};


using namespace std;

int main(){

    TestaValidaNumero t;

    try{
        t.validaNumero(101);
    }catch(ValorAbaixoException e1){
        cout << e1.what() <<endl;
    }catch(ValorAcimaException e2){
        cout << e2.what() <<endl;
    }catch(ValorMuitoAcimaException e3){
        cout << e3.what() <<endl;
    }
    
    return 0;
}