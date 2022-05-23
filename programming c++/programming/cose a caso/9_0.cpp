#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void media(int **V,int n){

    int s1=0;
    int s2=0;
    for(int i=0;i<n;++i){
        s1+=V[i][i];
    }

    for(int i=0,j=n-1;i<n;++i){
        s2+=V[i][j];
        --j;
    }
    cout <<  s1-s2;
}

void mediaP(int **V,int n,int M,int p){

    for(int j=1;j<M;j+=2){
        int s=0;
        int c=0;
        for(int i=0;i<n;++i){
            if(V[i][j]<=p){
                s+=V[i][j];
                ++c;
            }
        }
        cout << "i= " << j << ": " << (double) s/c << " ";
    }
}

void maxmin(int **V,int N,int M,int *W,int L){
    int max=W[0];
    int min=W[0];

    for(int i=0;i<L;++i){
        if(W[i]<min){
            min=W[i];
        }
        if(W[i]>max){
            max=W[i];
        }
    }

    for(int i=0;i<N;++i){
        int c=0;
        for(int j=0;j<M;++j){
            if(V[i][j]>=min && V[i][j]<=max){
                ++c;
            }
        }
        cout << "i= " << i << ": " << c;
    }
}

bool nove(int **V,int n,int m,int *A,int k,int w){

    for(int i=0;i<n;++i){
        int c=0;
        for(int j=0;j<m;++j){
            if(V[i][j]>A[j]){
             ++c;
            }
        }
        if(c>=w){
            return true;
        }
    }
}

void stampa(int **V,int n,int m,int **W,int l,int q,int p){

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int c=0;
            for(int k=0;k<l;++k){
                for(int b=0;b<q;++b){
                    if(V[i][j]==W[k][b]){
                        ++c;
                    }
                }
            }
            if(c>=p){
                cout << V[i][j];
            }
        }
    }
}
int main(){

    srand(time(NULL));

    int n=4;
    int m=4;
    int p=5;

    int **V=new int *[n];
    for(int i=0;i<n;++i){
        V[i]=new int [m];
        for(int j=0;j<n;++j){
            V[i][j]=rand()%10;
            cout << V[i][j] << " ";
        }
        cout << endl;
    }

    mediaP(V,n,m,p);
}