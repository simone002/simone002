#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>


using namespace std;

bool f1(char*** c,int n){

int t=0;

    for(int j=0;j<n;++j){
      t=0;
      for(int i=0;i<n;++i){
        if(strcmp(c[i][j],c[i][i])==0){
          ++t;
        }
      }
      if(t==n){
          return true;
      }
    }
    return false;
}



bool f(char ***A,int n){


  for(int j=0;j<n;++j){
    int c=0;
    for(int i=0;i<n;++i){
      if(A[i][j]!=nullptr){
        if(A[i][i]!=nullptr){
          if(*A[i][j]==*A[i][i]){
            ++c;
          }
        }
      }
    }
    if(c==n){
      return true;
    }
  }
  return false;
}


string **func(string **A,int n,int k){

  string **B=new string *[n];
  for(int i=0;i<n;++i){
    B[i]= new string [n];
  }
  
  for(int j=0;j<n;++j){
    for(int i=0;i<n;++i){
      if(j==k){
        for(int m=0;m<A[i][j].length();++m){
          switch (A[i][j][m])
          {
          case 'y':
          case 'j':
          case 'k':
          case 'w':
          case 'x':
          case 'Y':
          case 'J':
          case 'K':
          case 'W':
          case 'X':
            A[i][j].erase(remove(A[i][j].begin(),A[i][j].end(),A[i][j][m]));
            break;
          }
        }
      }
      B[i][j]=A[i][j];
    }
  }
  return B;
}

int main(){

  int k=2;
  int n=3;

  string **A=new string *[n];
  for(int i=0;i<n;++i){
    A[i]= new string [n];
    for(int j=0;j<n;++j){
      cin >> A[i][j];
    }
  }


  string **f=func(A,n,k);

  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      cout << f[i][j] << " ";
    }
    cout << endl;
  }
}

