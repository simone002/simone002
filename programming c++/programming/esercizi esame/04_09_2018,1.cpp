#include <iostream>

using namespace std;


string f1(string  ***A,int n,int m,int b){

string des= "";

 for(int i=0;i<n;++i){
      for(int j=0;j<m;++j){
        for(int k=0;k<b;++k){
          des+=A[i][j][b].substr(A[i][j][b].length()-2);
        }
      }
      if(i==0){
          break;
      }
    }
    return des;
}

int main(){

  int n=3;
  int m=3;
  int b=3;

    string ***C=new string **[n];
    for(int i=0;i<n;++i){
      C[i]=new string *[m];
      for(int j=0;j<n;++j){
        C[i][j]=new string [b];
      }
    }

 for(int i=0;i<3;++i){
      for(int j=0;j<3;++j){
        for(int k=0;k<3;++k){
          cin >> C[i][j][k];
        }
      }
    }

    cout << f1(C,n,m,b);
    
}