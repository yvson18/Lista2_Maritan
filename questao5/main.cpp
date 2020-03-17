#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


int main(){


    vector <string> bufferString;

    ifstream streamReading("CalisteniaWorkout.txt",ios::in);

    if(!streamReading.is_open()){
        cout << "Nao foi possivel abrir o arquivo" << endl;
        streamReading.close();
        return 0;
    }

    while(!streamReading.eof()){
        string currentLine;
        getline(streamReading,currentLine);
        bufferString.push_back(currentLine);
    }

    for(int i  = 0 ; i < bufferString.size(); i++){
        cout << bufferString[i] << endl;
    }

    streamReading.close();

    ofstream streamWriting("CalisteniaWorkout_bkp.txt",ios::out|ios::trunc);

    if(!streamWriting.is_open()){
        cout << "Nao foi possivel abrir o arquivo" << endl;
        streamWriting.close();
        return 0;
    }

    for(int i  = 0; i < bufferString.size();i++){
        streamWriting << bufferString[i] << endl;
    }





    return 0;
}
