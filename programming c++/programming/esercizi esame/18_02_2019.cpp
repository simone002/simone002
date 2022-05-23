#include <iostream>
#include <string>

using namespace std;

int f(string***M,int n,int m,short k,short s){

    int cc=0;


    for(int j=0;j<m;++j){
      int cs=0;
      for(int i=0;i<n;++i){
        string d=*M[i][j];
        int cv=0;
        for(int w=0;w<d.length();++w){
          switch(d[w]){
              case 'a':
              case 'e':
              case 'i':
              case 'o':
              case 'u':
              case 'A':
              case 'E':
              case 'I':
              case 'O':
              case 'U':
                       ++cv;
                       break;
          }
        }
        if(cv<s){
          ++cs;
        }
      }
      if(cs>=k){
       ++cc;
      }
    }

    return cc;
}

int main(){

      int n=3;
      int s=4;
      int k=2;

    string ***A=new string **[n];
    for(int i=0;i<n;++i){
        A[i]=new string *[n];
        for(int j=0;j<n;++j){
          A[i][j]= new string ();
        }
    }
        

    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        cin >> *A[i][j];
      }
    }


    cout << f(A,n,n,k,s);

}