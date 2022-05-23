#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

#define M 3

bool f1(bool (*A)[M],int n,bool (*B)[M],bool (*C)[M]){

    int c=0;
    bool valore;

    for(int i=0;i<n;++i){
      for(int j=1;j<M-1;++j){
          c=0;
        for(int d=j;d<M;++d){ // controllare tutte le diagonali superiori a quella principale
          if(A[c][d]==B[c][d] && A[c][d]==C[c][d]){ 
            valore=true;
          }
          else{
            break;
          }
          ++c;
        }
        if(valore){
            return true;
        }
      }
    }

    return false;
}

bool f(string***A,int n,int m, char c){

  for(int i=0;i<n;++i){
    for(int j=0;j<m;++j){
      for(int k=0;k<(*A[i][j]).length();++k){
        if((*A[i][j])[k]==c){
          (*A[i][j]).erase(remove((*A[i][j]).begin(),(*A[i][j]).end(),(*A[i][j])[k]));
        }
      }
      for(int l=0;l<n;++l){
        for(int b=0;b<m;++b){
          if(b!=j){
          for(int x=0;x<(*A[i][j]).length();++x){
            if((*A[i][b])[x]==c){
                (*A[i][b]).erase(remove((*A[i][b]).begin(),(*A[i][b]).end(),(*A[i][b])[x]));
            }
          }
          if((*A[i][j]).compare(*A[i][b])==0){
            return true;
          }
        }
        }
      }
    }
  }
  return false;
}

int main(){

    int n=2;
    int m=3;
    char c;
    cin >> c;

    string ***A=new string**[n];
    for(int i=0;i<n;++i){
      A[i]= new string*[m];
      for(int j=0;j<m;++j){
        A[i][j]= new string();
        cin >> *A[i][j];
      }
    }

    if(f(A,n,m,c)){
      cout << "gg";
    }

}