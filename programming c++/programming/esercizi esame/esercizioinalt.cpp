#include <iostream>

using namespace std;

bool func(int** A,int n,int w, int v){

    for(int j=0;j<n;++j){
        double s=0;
        for(int i=0;i<n;++i){
            s+=A[i][j];
        }
        double r=s/n;
        if(r>w && r<v){
            return true;
        }
    }
}