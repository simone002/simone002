#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;


string *f(char*** P,int n,int m,unsigned short *S,unsigned int *W,int l){

    string *g=new string [l];
    
    srand(time(NULL));

    int f,u;
         for(int i=0;i<l;++i){
           f=S[i]%n;
           while(g[i].length()<W[i]){
             u= rand()%m;
             if(P[f][u]){
             g[i]+=*P[f][u];
             }
           }
        }
  
    return g;
}



bool f(int***S,int n,double w,short k){

  int kcolonne=0;

  for(int j=0;j<n;++j){
    double s=0;
    int c=0;
    for(int i=0;i<n;++i){
      if(S[i][j]){
        s+=*S[i][j];
        ++c;
      }
    }
    if(c>0){
    if((double)s/c<=w){
      ++kcolonne;
    }
    }
  }

  if(kcolonne>=k){
    return true;
  }
  return false;
}


int main(){

    int n=2;
    int m=2;
    int l=4;


     char*** A=new char **[n];
     for(int i=0;i<n;++i){
       A[i]=new char *[m];
       for(int j=0;j<m;++j){
         A[i][j]=new char ();
       }
     }

     for(int i=0;i<n;++i){
       for(int j=0;j<m;++j){
           cin >> *A[i][j];
       }
     }

     for(int i=0;i<n;++i){
       for(int j=0;j<m;++j){
           cout <<  *A[i][j];
       }
     }

     unsigned int w[l];

     for(int i=0;i<l;++i){
         cin >> w[i];
     }

     unsigned short s[l];
     //for(int i=0;i<l;++i){
       //cin >> s[i];
   //  }

     string *ptr=f(A,n,m,s,w,l);

     for(int i=0;i<l;++i){
         cout << ptr[i] << " ";
     }
}

    
