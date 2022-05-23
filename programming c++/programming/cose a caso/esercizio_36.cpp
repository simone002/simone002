#include <iostream>
#include <string>

using namespace std;

int func(string **A,int n,int m,string x,string y,short k,short w){

double nc=0;

    for(int j=0;j<m;++j){
        int ns=0;
        for(int i=0;i<n;++i){
            int xchar=0;
            int ychar=0;
            for(int k=0;k<A[i][j].length();++k){
                for(int l=0;l<x.length();++l){
                    if(x[l]==A[i][j][k]){
                        ++xchar;
                    }
                }
                for(int l1=0;l1<y.length();++l1){
                    if(y[l1]==A[i][j][k]){
                        ++ychar;
                    }
                }
            }
            if(xchar>=w && ychar>= w){
                ++ns;
            }
        }
        if(ns>=k){
            ++nc;
        }
    }
    
    return (double) (nc/m)*100;
}

int func1(string **A,int n,int m,string x,string y,short k,short w){

double nc=0;

    for(int j=0;j<m;++j){
        int ns=0;
        for(int i=0;i<n;++i){
            int xychar=0;
            for(int k=0;k<A[i][j].length();++k){
                if(x.find(A[i][j][k])!=string::npos && y.find(A[i][j][k])!=string::npos){
                    ++xychar;
                }
            }
            if(xychar>=w){
                ++ns;
            }
        }
        if(ns>=k){
            ++nc;
        }
    }
    
    return (double) (nc/m)*100;
}

int main(){

    int n=4;
    int m=4;

    string **M=new string *[n];
    for(int i=0;i<n;++i){
        M[i]=new string [m];
        for(int j=0;j<m;++j){
            M[i][j]= "ciao";
        }
    }

    string x="ciao"; string y="ciao";
    short k=3; short w=3;

    cout << func(M,n,m,x,y,k,w);

}