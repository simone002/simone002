#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
#define N 5

bool f1(int ***Q,int n, double w){

     int somma1=0,somma2=0,c=N-1;

     double rapporto;

     for(int j=0;j<N;++j){
          for(int i=0;i<N;++i){
              somma1+=Q[i][j];
              somma2+=Q[i][c];
              --c;
          }
          rapporto=somma1/somma2;
          if(rapporto>w){
           return true;
          }
          else{
            c=N-1;
            somma1=0;
            somma2=0;
          }
        }
        return false;
}


int main(){

        srand(time(NULL));

        double w;
        cin >> w;

        int Q[N][N];

        for(int i=0;i<N;++i){
          for(int j=0;j<N;++j){
              Q[i][j]= rand()%100;
          }
        }

        for(int i=0;i<N;++i){
          for(int j=0;j<N;++j){
              cout << Q[i][j] << " ";
          }
          cout << endl;
        }


        if(f1(Q,N,w)){
          cout << "proprietà confermata";
        }
}

