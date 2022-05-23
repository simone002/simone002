#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

int main() {

        string nome,cognome,altro;

        cout << "inserire nome e cognome: " << endl;
        cin >> nome >> cognome;

        cout << "primo e ultimo carattere del nome: " << nome[0]+nome.substr(nome.length()-1) << endl;
        cout << "secondo e terzo carattere del nome: " << cognome.substr(1,2) << endl;

        for(int i=0; i<nome.length(); ++i){
          for(int c=0; c<cognome.length();++c){
            if(nome[i]==cognome[c])
             altro=altro+nome[i];
          }
        }
        cout << "nome+caratteri uguali del cognome: " << altro << endl;

        if(nome[0]==cognome[cognome.length()-1])
          cout << "vero" << endl;
        else
          cout << "falso" << endl;

        if(nome.length()==cognome.length())
           cout << "stesso numero di caratteri" << endl;

        int cn=0,cc=0;

        for(int i=0;i<nome.length();++i){
          switch(nome[i]){
               case 'a':
               case 'e':
               case 'i':
               case 'o':
               case 'u':
                        break;
               default:
                       ++cn;
          }
        }
                
              

        for(int i=0;i<cognome.length();++i){
          switch(cognome[i]){
               case 'a':
               case 'e':
               case 'i':
               case 'o':
               case 'u':
                        break;
               default:
                       ++cc;
          }
        }

        cout << "consonanti nome=" << cn << " , cosonanti cognome=" << cc;
        
}