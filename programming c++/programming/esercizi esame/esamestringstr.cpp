#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

string f(string** A,int n,int m){

    stringstream r;
    string s;

    for(int i=0;i<n;++i){
      for(int j=0;j<m;++j){
        int p=i+j;
        if(p>=A[j%n][i%m].length()){
            if(p<A[i][j].length()){
                for(int k=0;k<A[i][j].length();++k){
                  if(A[i][j][k]== 'a' || A[i][j][k] == 'e' || A[i][j][k] == 'i' || A[i][j][k] == 'o' || A[i][j][k] == 'u' || A[i][j][k] == 'A'){
                    r << A[i][j][k];
                  }
                }
            }
        }
      }
    }
    r >> s;
     return s;
}


int main(){

    int n=3;
    int m=3;

    string **A=new string *[n];
    for(int i=0;i<n;++i){
        A[i]=new string [m];
      for(int j=0;j<m;++j){
        cin >> A[i][j];
      }
    }

    cout << f(A,n,m);
}