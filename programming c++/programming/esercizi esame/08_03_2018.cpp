#include <iostream>

using namespace std;

bool f(int ***A,int n){

    int s=0;

    for(int i=1,j=n-1;i<n;++i){
        s+=*A[i][j];
        --j;
    }
    if(s%n==0){
        return true;
    }
    return false;
}

bool f1(string **A,int n,short w){

    char c[w];
    char c1[w];

    for(int i=0;i<n;++i){
        for(int j=0;j<n-1;++j){
            for(int k=0;k<w;++k){
                c[k]=A[i][j][k];
            }
            for(int l=0;l<w;++l){
                c1[l]=A[i][j+1][(A[i][j+1].length()-1)-l];
            }
            int counter=0;
            for(int m=0;m<w;++m){
                if(c[m]==c1[m]){
                    ++counter;
                }
            }
            if(counter==w){
                return true;
            }
        }
    }
    return false;


}

int main(){}