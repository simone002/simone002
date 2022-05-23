#include <string>
#include <iostream>

using namespace std;


bool stringpal(string***M,int n,int m){

    int c[m];
    int c1[n];

    for(int j=0;j<m;++j){
       int count=0;
        for(int i=0;i<n;++i){
            if(M[i][j]!=nullptr){
                if(*M[i][j]==string((*M[i][j]).rbegin(),(*M[i][j]).rend())){
                    ++count;
                }
            }
        }
        c[j]=count;
    }

    for(int i=0;i<n;++i){
       int count=0;
        for(int j=0;j<m;++j){
            if(M[i][j]!=nullptr){
                if(*M[i][j]==string((*M[i][j]).rbegin(),(*M[i][j]).rend())){
                    ++count;
                }
            }
        }
        c1[i]=count;
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(c[i]==c1[j]){
                return true;
            }
        }
    }
    return false;
}


int main(){

    int n=6;
    int m=7;

    string***A=new string **[n];
    for(int i=0;i<n;++i){
        A[i]=new string *[m];
        for(int j=0;j<m;++j){
            A[i][j]= new string ();
            *A[i][j]= "ossesso";
        }
    }

    if(stringpal(A,n,m)){
        cout << "gg";
    }
}


