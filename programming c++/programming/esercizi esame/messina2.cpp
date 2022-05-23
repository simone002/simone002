#include <iostream>

using namespace std;


bool *f(double **A,int n,double **B){


        bool *g= new bool [n];


        for(int i=0;i<n;++i){
          double maxA=A[i][0];
          double maxB=B[0][i];
          double r;
          for(int j=1;j<n;++j){
            if(maxA<A[i][j]){
              maxA=A[i][j];
            }
            if(maxB<B[j][i]){
              maxB=B[j][i];
            }
          }
          r= maxA/maxB;
          if(r<=1 && r>=0){
            g[i]=1;
          }
          else{
            g[i]=0;
          }
        }

        return g;
}


bool *f1(string** A,int n,int m,string***B,int l){

  bool *C=new bool [l];

  for(int j=0;j<l;++j){
    int c=0;
    for(int i=0;i<m;++i){
      if(B[i][j]){
        if(A[j][i].find(*B[i][j])!=string::npos){
          ++c;
        }
      }
    }
    if(c>0){
      C[j]=true;
    }
    else C[j]=false;
  }
  return C;
}








int main(){

    int n=2;

    double **A=new double *[n];
    for(int i=0;i<n;++i){
      A[i]=new double [n];
    }

    double **B=new double *[n];
    for(int i=0;i<n;++i){
      B[i]=new double [n];
    }
    
    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
          cin >> A[i][j];
      }
    }

     for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
          cin >> B[i][j];
      }
    }


    bool *g=f(A,n,B);

    for(int i=0;i<n;++i){
       cout << g[i] << " ";
    }
   
}