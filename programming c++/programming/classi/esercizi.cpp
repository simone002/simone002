#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string primoes(string& prova){

    //funzione primoes
    
    string tmp= "";

    for(int j=0;j<prova.length();++j){ // DOPPI SPAZI   

        if(prova[j]==' ' && prova[j+1]== ' '){

        }
        else tmp+=prova[j];

    }

    tmp.erase(remove(tmp.begin(),tmp.end(),','),tmp.end()); // rimuovere virgole dalla stringa
    tmp.erase(remove(tmp.begin(),tmp.end(),'.'),tmp.end()); // rimuovere punti dalla stringa

    return tmp;

}

string secondoes(string& prova){

    // funzione secondo eserciio

    string tmp= "";

    bool punto=false;   

    for(int j=0;j<prova.length();++j){ // DOPPI SPAZI 

        if(prova[j]==' ' && prova[j+1]== ' '){

        }

        else if(prova[j]=='.'){
            tmp+=prova[j];
            tmp+=' ';
            punto=true;
        }

        else if(punto){
            tmp+=toupper(prova[j]);
            punto=false;
        }

        else tmp+=prova[j];

    }
    
    return tmp;
}

int main(){

    
    fstream ciao;

    string prova;

    ciao.open("mariacatena.txt", ios::in);

    getline(ciao,prova);

    //prova=primoes(prova);

    //prova=secondoes(prova);

    ciao.close();


    ciao.open("prova.txt",ios::out);

    ciao << prova;
    ciao.close();
   
}