#include <iostream>

using namespace std;

int main(){
    int somma=0;

    for(int i=1000; i<=1000; i=i-2){
       if(somma>=100000)
         break;
       else
         somma=somma+i;

         cout << i << endl;
    }
         cout << somma;
       
}