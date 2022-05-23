#include <iostream>
#include <string>

using namespace std;


bool f(int***A,int n,int m){

  for(int i=0;i<n;++i){
    for(int j=0;j<m-1;++j){
      if(A[i][j]){
        for(int k=0;k<n;++k){
          for(int l=j+1;l<m;++l){
            if(A[k][l]){
              if(*A[i][j]==*A[k][l]){
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

int palindrome(string*A,int n){
  int max[n];

  for(int i=0;i<n;++i){
    int j=A[i].length()/2;
    bool pal=false;
    for(int k=0;k<A[i].length()/2;++i){
      if(A[i][j-1]==A[i][j+1]){
        pal=true;
      }
      else{
        pal=false;
        break;
      }
    }
    if(pal)
    max[i]=A[i].length();
  }
  int max1=max[0];
  for(int i=1;i<n;++i){
    if(max1<max[i]){
      max1=max[i];
    }
  }

  return max1;
}


int main(){


    int n=4;
    string C[n];

    for(int i=0;i<n;++i){
      cin >> C[i];
    }
    /*
    int m=2;

    int ***C=new int **[n];
    for(int i=0;i<n;++i){
        C[i]=new int *[n];
        for(int j=0;j<m;++j){
            C[i][j]=new int;
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> *C[i][j];
        }
    }

    if(f(C,n,m)){
        cout << "gg";
    }
    */
}