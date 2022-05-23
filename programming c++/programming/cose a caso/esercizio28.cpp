#include <iostream>
#include <string>

using namespace std;


int func(string *A,int n){

    int ret=0,j=0;

    for(int i=0;i<n;++i){
        int l=A[i].length()/2;
        j=1;
        while(A[i][l-j]==A[i][l+j]){
            ++j;
        }
        if(j>ret) ret=0;
    }

    return ;
}

bool f(int **M, int n,int m,short k,double x){

    for(int j=0;j<m;++j){
        int kcoppie=0;
        for(int i=0;i<n-1;++i){
            if(M[i][j]!=0 &&  M[i+1][j]!=0){
                if((double) M[i][j]/M[i+1][j]<x){
                    ++kcoppie;
                }
            }
        }
        if(kcoppie==k) 
            return true;
    }
    return false;
}