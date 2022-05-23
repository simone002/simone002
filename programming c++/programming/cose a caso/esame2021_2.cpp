#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void func(string ***A,char *B,int n){

    for(int j=0;j<n;++j){
        for(int i=0;i<n;++i){
            if(j%2!=0){
                if(A[i][j]){
                    for(int l=0;l<(*A[i][j]).length();++l){
                    for(int k=0;k<n;++k){
                        switch (B[i]){
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
                                     if((*A[i][j])[l]==B[k]){
                                        (*A[i][j]).erase(remove((*A[i][j]).begin(),(*A[i][j]).end(),B[l]));
                                        break;
                                     }
                        }
                    }
                    }
                }
            }
        }
    }
}