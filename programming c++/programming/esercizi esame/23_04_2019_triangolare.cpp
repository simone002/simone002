#include <iostream>

using namespace std;

bool f(short **M,int n){

bool condizione= true;

    int i=0; // triangolare inferiore
    while (i<n-1){
        int j=i+1;
        while(j<n){
            if(M[i][j]!=0){
             condizione= false;
            }
            ++j;
        }
        ++i;
    }

    if(condizione){
        return condizione;
    }

   condizione= true;
//triangolare superiore

    int k=n-1;
    while(k>0){
        int j=k-1;
        while(j>=0){
            if(M[k][j]!=0){
              condizione=false;
            }
            --j;
        }
        --k;
    }

    return condizione;
}



int func1(string***S,int n,int m,string s1,short k){

    int kcolumn=0;

    for(int j=0;j<m-k;++j){
        for(int i=0;i<n;++i){
            if(S[i][j]!=nullptr){
                if((*S[i][j]).length()>s1.length()){
                    ++kcolumn;
                }
            }
        }
    }

    return (double) (kcolumn/m-k)*100;
}


int main(){
    
    int n=3;

    short **M=new short *[n];
    for(int i=0;i<n;++i){
        M[i]=new short [n];
    }

    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        cin >> M[i][j];
      }
    }

    if(f(M,n)){
        cout << "gg";
    }
}