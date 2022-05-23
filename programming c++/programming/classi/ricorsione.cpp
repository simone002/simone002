#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

#define N 10

int f(int n,int m){
    if(m==0) return n;
    else return 1+(n,m-1);
}

int f1(int n){
    if(n)
}

int fattoriale(int n){
    if(n==0) return 1;
    else return n* fattoriale(n-1);
}

int somma1(int v[],int i=N-1){
    if(i==0) return v[0];
    else return v[i]+=somma1(v,i-1);
}

int max(int v[],int n){
    if(n==1)return v[0];
    else {
    int max1=max(v,n-1);
    return v[n-1] > max1 ? v[n-1] : max1;
    }
}

int sommamassima(int S[],int n){ //(O^2)
    int max=0;
    int somma=0;
    for(int i=0;i<n;++i){
        somma=0;
        for(int j=i;j<n;++j){
          somma+=S[j];
          if(somma>max) max=somma;
        }
        return max;
    }
    return 0;
}

int main(){

   // int n=func(4);
   // cout << n;

    int v[N];
/*
    for(int i=0;i<N;++i){
        v[i]=rand()%10;
        cout << v[i] << " ";
    }

    cout << endl;
    */
   cout << f(5,6);

   // cout << sommamassima(v,N);
}