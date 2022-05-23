#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int func(int **M,int n){

    int cn=0;
    int max=0;

    for(int j=0;j<n;++j){
        int somma=0;
      for(int i=0;i<n;++i){
          somma+=M[i][j];
      }
      if(somma>max){
          max=somma;
          cn=j;
      }
    }
    return cn;
}

int main(){
    
    srand(time(NULL));
    
    int n=3,**A= new int *[n];
    for(int i=0;i<n;++i){
        A[i]= new int [n];
        for(int j=0;j<n;++j){
            A[i][j]=rand()%10;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << func(A,n);

   

    
}