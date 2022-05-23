#include <iostream>
#include <sstream>

using namespace std;

int main(){
    stringstream s1;
    string ss1;

    for(int i=122; i>=97; --i ){
       //if(i!=97 && i!=105 && i!=101 && i!=111 && i!=117){ // evitare di stampare le vocali
       switch (i){
         case 97:
         case 105:
         case 101:
         case 111:
         case 117:
           break;
         default:
         char c=i; // convertire un tipo int in un char utilizzando la codifica ascii
         cout << c << endl;
         s1 << c;
           break;
       }
    }
    cout << s1.str() << endl; // buffer di string s1
    s1 >> ss1; // estrarre buffer di string in un tipo stringa
    cout  << ss1.length(); // lunghezza stringa
}