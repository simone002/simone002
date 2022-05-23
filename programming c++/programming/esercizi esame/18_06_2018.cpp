#include <iostream>
#include <string>

using namespace std;

int *f(int **A,int n,int *B){

    int *C=new int [n];

    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        if(A[i][j]==B[i])
        C[i]=B[i];
      }
    }
    return C;
}

int main(){

}
