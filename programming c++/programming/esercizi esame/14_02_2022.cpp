#include <iostream>
#include <string>

using namespace std;

string D(string***S,int n,bool**B,){

    string s="";

    bool A[n][n];

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            A[i][j]=B[i][j];
        }
    }

      for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            B[i][j]=A[j][i];
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(B[i][j]==A[i][j] && S[i][j]){
                for(int k=0;k<(*S[i][j]).length();k+=2){
                    s+=(*S[i][j])[k];
                }
            }
        }
    }

    return s;
}
