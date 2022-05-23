#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int func(bool **A,int n){

    srand(time(NULL));

    int libri_trovati=0;

    int i=n/2;
    int j=n/2;
    int r=0;
    while(i>=0 && j>=0 && i<n && j<n){
        if(A[i][j]){
            ++libri_trovati;
            A[i][j]=false;
        }
        r=rand()%4;
        switch (r)
        {
        case 0:
                ++i;
                break;
        case 1:
                --i;
                break;
        case 2:
                ++j;
                break;
        case 3: 
                --j;
                break;
        }
    }
    return libri_trovati;
}

bool func1(string***A,int n){

    for(int j=0;j<n;++j){
        for(int i=0;i<n-1;++i){
            if(A[i][j]!=nullptr){
                int cv=0;
            for(int k=0;k<(*A[i][j]).length();++k){
                switch ((*A[i][j])[k]){
                    
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
            for(int l=i+1;l<n;++l){
                if(A[i][j]!=nullptr){
                    int cv1=0;
                for(int s=0;s<(*A[l][j]).length();++s){
                    switch ((*A[l][j])[s])
                    {
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
                                ++cv1;
                                break;
                    }
                }
                if(cv==cv1){
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


    srand(time(NULL));

    int n=2;

    string ***A=new string **[n];
    for(int i=0;i<n;++i){
        A[i]=new string *[n];
        for(int j=0;j<n;++j){
            A[i][j]=new string ();
            cin >> *A[i][j];
            cout << *A[i][j] << " ";
        }
        cout << endl;
    }

    if(func1(A,n)){
        cout << "gg";
    }
}