#include <iostream>
#include <string>

using namespace std;

bool func(string***M,int n,int m){

    int c[n];
    int c1[m];

    for(int j=0;j<m;++j){
        int cm=0;
        for(int i=0;i<n;++i){
            if(*M[i][j]==string((*M[i][j]).rbegin(),(*M[i][j]).rend()))
            ++cm;
        }
        c[j]=cm;
    }

    for(int i=0;i<n;++i){
        int cn=0;
        for(int j=0;j<m;++j){
            if(*M[i][j]==string((*M[i][j]).rbegin(),(*M[i][j]).rend()))
            ++cn;
        }
        c[i]=cn;
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(c[i]==c[j]){
                return true;
            }
        }
    }
}