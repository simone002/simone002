#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

void leggielementi(double a[],int n){
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
}

void stampaelementi(double a[],int n){
    for(int i=0;i<n;++i){
        cout << a[i] << " ";
    }
}

void frase(string a[],int n){

    for(int i=0;i<n;++i){
        for(int j=0;j<a[i].length();++j){
            if(a[i][j]==' '){
                a[i].erase(remove(a[i].begin(),a[i].end(),a[i][j]),a[i].end());
            }
        }
    }
}

void primo(int n){
    int num=2;
    int div;
    bool primo;

    while(num<n){
        div=2;
        primo=true;
        while(div<=floor(num/2)){
            if(num%div==0){
                primo=false;
                break;
            }
            div++;
        }
        if(primo){
            cout << num;
        }
        num++;
    }
}

void sqrtc1(int n){
    int num=2;
    int div;
    bool primo;
    int lim;

    while(num<=n){
        div=2;
        primo=true;
        lim=sqrt(num);
        while(div<=lim){
            if(num%div==0){
                primo=false;
                break;
            }
            div++;
        }
        if(primo){
            cout << num << " ";
        }
        num++;
    }
}


void primo3(int n){

   int v[n];
   for(int i=2;i<=n;++i){
       v[i]=0;
   }

    for(int i=2;i<=n;++i){
        if(v[i]==0){
            for(int j=2*i;j<=n;j+=i)
            v[j]=1;
        }
    }

    for(int i=2;i<=n;++i){
        if(v[i]==0)
        cout << i << " ";
    }
}


int main(){
/*
    int n=3;
    double a[n];
    leggielementi(a,n);
    stampaelementi(a,n);
    */
    
    

    int n=1;
    string a[n]= {"ciao  come stai io bene"};

    frase(a,n);
    cout << a[0];

    cout << endl;

    primo(30);

    cout << endl;

    sqrtc1(30);

    cout << endl;

    primo3(30);

}