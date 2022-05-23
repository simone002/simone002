#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

void f(string ***A,int n,char* B){

    for(int j=0;j<n;++j){
      for(int i=0;i<n;++i){
         if(j%2!=0){
           if(A[i][j])
          for(int k=0;k<(*A[i][j]).length();++k){
            for(int l=0;l<n;++l){
              switch (B[l]){
                  case 'A':
                  case 'a':
                  case 'e':
                  case 'E':
                  case 'i':
                  case 'I':
                  case 'o':
                  case 'O':
                  case 'u':
                  case 'U':
                            if((*A[i][j])[k]==B[l]){
                             (*A[i][j]).erase(remove((*A[i][j]).begin(),(*A[i][j]).end(),B[l]));
                            }
                           break;
              }
            }
          }
         }
      }
    }
}


int main(){

    int n=2;

    string ***A= new string **[n];
    for(int i=0;i<n;++i){
      A[i]= new string *[n];
      for(int j=0;j<n;++j){
        A[i][j]=new string ();
      }
    }


    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
          cin >> *A[i][j];
      }
    }

    char *c=new char [n];

    for(int i=0;i<n;++i){
        cin >> c[i];
    }

    f(A,n,c);

    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        cout << *A[i][j] << " ";
      }
      cout << endl;
    }

}