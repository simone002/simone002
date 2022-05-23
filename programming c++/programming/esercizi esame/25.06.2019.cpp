#include <iostream>
#include <string>

using namespace std;

bool f(string ***Q,int n,short m,short k){

    short cs=0;

    for (int i=0,j=n-1;i<n;++i){
       string s=*Q[i][j];
       int cv=0;
       for(int l=0;l<s.length();++l){
         if(s[l]==toupper('a') || toupper('e') || toupper('i') || toupper('o') || toupper('u')){
           ++cv;
         }
       }
        if(cv<k){
          ++cs;
        }
        --j;
    }

    if(cs>=m){
      return true;
    }

   return false;
}

int main(){

    int n=3;

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


          if(f(A,n,3,4))
           cout << "gg";
         
}