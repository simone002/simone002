#include <iostream>
#include <string>

using namespace std;

int f(int ***A,int n,int m,double d1,double d2,short s){

    int nc=0;
    for(int j=0;j<m;++j){
        short c=0;
        for(int i=0;i<n;++i){
            if((double(*A[i][j]))/(*A[i+1][j])>=d1 && (double(*A[i][j]))/(*A[i+1][j])<=d2){
                ++c;
            }
        }
        if(c>=s){
            ++nc;
        }
    }
}

bool f1(string***Q,int n,string s){
    
    int nsdp=0;
    for(int i=0;i<n;++i){
        if((*Q[i][i]).find(s)!=string::npos){
            ++nsdp;
        }
    }
    int nsds=0;
    for(int i=0,j=n-1;i<n;++i){
        if((*Q[i][i]).find(s)!=string::npos){
            ++nsdp;
        }
        --j;
    }
    if(nsdp>nsds){
        return true;
    }
    return false;
}

bool f2(int **A,int n,double w){
    double B[n];

    for(int j=0;j<n;++j){
        double s=0;
        for(int i=0;i<n;++i){
            s+=A[i][j];
        }
        B[j]=s;
    }
    double sp=0;
    for(int i=0;i<n;++i){
        sp+=A[i][i];
    }
    for(int i=0;i<n;++i){
        if(B[i]/sp>w){
            return true;
        }
    }
    return false;
}