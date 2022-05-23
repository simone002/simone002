#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int A[3][3];
    int B[3][3];

    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            A[i][j]=rand()%10;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

     for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            B[i][j]=A[i][j];
        }
    }


    cout << endl;

    cout <<  "questa è B(T): " << endl;

     for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            A[i][j]=B[j][i];
            cout << A[i][j] << " ";
        }
        cout << endl;
    }



}