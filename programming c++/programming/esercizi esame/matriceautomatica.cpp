#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define M 10
#define N 10

//allocazione statica

void f1(int (*m)[M], int n){ // allocazione automatica o statica array bidimensionale

    srand(time(NULL));
    
    for(int j=0;j<M;++j){ //visita per colonne
      for(int i=0; i<N;++i){
         m[i][j]= rand()%31;
      }
    }
}

void f2(int m[][M], int n){ // allocazione automatica o statica array bidimensionale

    srand(time(NULL));
    
    for(int j=0;j<M;++j){ //visita per colonne
      for(int i=0; i<N;++i){
         m[i][j]= rand()%31;
      }
    }
}


void stampa(int (*m)[M], int n){
    for(int j=0;j<M;++j){ //visita per colonne
      for(int i=0; i<N;++i){
        cout << *(*(m+i)+j) << " ";
      }
       cout << endl;
    }
}


int main(){

    int v[N][M]; // allocazione di array bidimensionale automatica
    f1(v,M); //array bidimensionale
    stampa(v,M);
}