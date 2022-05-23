#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int A[3][3];

    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cin >> A[i][j];
        }
    }

    int i=0;
    while (i<3){
        int j=i;
        while(j<3){
            cout << A[i][j];
            ++j;
        }
        ++i;
    }
    cout << endl;

    int k=0;
    while (k<3){
        int j=0;
        while(j<=k){
            cout << A[k][j];
            ++j;
        }
        ++k;
    }
}