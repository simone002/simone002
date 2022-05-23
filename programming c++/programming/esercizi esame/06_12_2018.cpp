#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool *f(string***A,int n,int m,short k,string s){

  bool *B=new bool [n];

  for(int i=0;i<n;++i){
    int c=0;
    for(int j=0;j<n;++j){
      if(A[i][j]!=nullptr){
        if((*A[i][j]).find(s)!=string::npos){
          ++c;
        }
      }
    }
    if(c>=k){
      B[i]=true;
    }
    else
      B[i]=false;
  }
  return B;
}




int main(){

    int n=3;
    int m=2;
    short k;

    cout << " inserire un valore" << endl;
     while(cin>>k){
        if(k<n)
         break;
        cerr<< "inserire un valore minore a: " << m << endl;
    }

    string s;
    cout << "inserire una parola" << endl;
    cin >> s;

    string ***A=new string **[n];
    for(int i=0;i<n;++i){
      A[i]=new string *[m];
      for(int j=0;j<m;++j){
        A[i][j]=new string ();
      }
    }

    cout << "inizializzazione array di stringhe" << endl;
    for(int i=0;i<n;++i){
      for(int j=0;j<m;++j){
        cin >> (*A)[i][j];
      }
    }

    bool *ptr=f(A,n,m,k,s);

    for(int i=0;i<n;++i){
        cout << ptr[i] << " ";
    }


}