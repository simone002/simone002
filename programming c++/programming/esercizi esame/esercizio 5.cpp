#include <iostream>

using namespace std;

int *f(int **A,int n,int m,double **B,int k){

    int *C=new int [n];

    for(int i=0;i<n;++i){
      int s=0;
      for(int j=0;j<m;++j){
        s+=A[i][j];
        s+=(double) B[i][j]+0,5;
      }
      C[i]=s/(n+k);
    }

    