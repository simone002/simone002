#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int *g(short len){

    int *A= new int[len];

    return A;
}

void somma(int a, int b){
    cout << a+b;
}

int main(){

    unsigned int len;
    cout << "inserisci lunghezza array";
    cin >> len;

    int *V =g(len);
    for(int i=0;i<len;++i){
      *(V+i)=20;
      cout << V[i] << " ";
    }
    
 somma(9,7);

}
