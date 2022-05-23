#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

bool func(int **Q,int n,double w){

  double sds=0;
  for(int i=0,j=n-1;i<n;++i){
      sds+=Q[i][j];
      --j;
  }

  for(int j=0;j<n;++j){
    double sc=0;
    for(int i=0;i<n;++i){
      sc+=Q[i][j];
    }
    if(sc/sds>w)
    return true;
  }
  return false;
}

bool func1(string ***P,int n,int m,short a,short b,string s){

  for(int j=0;j<m;++j){
    int c=0;
    for(int i=0;i<n;++i){
      if(P[i][j]!=nullptr){
        if(P[i][j]->find(s)!=string::npos){
          ++c;
        }
      }
    }
    if(c>=a && c<=b){
      return true;
    }
  }
  return false;
}

int main(){

  int n=3;

    int **A=new int *[n];
    srand(time(NULL));

    for(int i=0;i<n;++i){
      A[i]=new int [n];
      for(int j=0;j<n;++j){
        A[i][j]=rand()%10;
        cout << A[i][j] << " ";
      }
      cout << endl;
    }

    if(func(A,n,0.2)){
      cout << "gg";
    }
}