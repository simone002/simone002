#include <iostream>
#include <string>

using namespace std;

bool *f(string** A,int n,int m,string***B,int l){

    bool *C=new bool [l];

    for(int i=0;i<l;++i){
      C[i]=false;
    }

    for(int j=0;j<l;++j){
      for(int i=0;i<m;++i){
        if(B[i][j]){
         if(A[j][i].find(*B[i][j])!=string::npos){
          C[j]=true;
          break;
         }
        }
      }
    }
    return C;
}

bool D(int***S,int n,double w,short k){

  int c=0;
  for(int j=0;j<n;++j){
    double s=0;int C=0;
    for(int i=0;i<n;++i){
      if(S[i][j]){
      s+=*S[i][j];
      ++c;
      }
    }
    double m=s/C;
    if(m<=w){
      ++c;
    if(c>=k){
      return true;
    }
    }
  }
  return false;
}