#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));
    int A[5][3][4];

    for(int i=0;i<5;++i){
      for(int j=0;j<3;++j){
        for(int k=0;k<4;++k){
            A[i][j][k]=rand()%3;
        }
      }
    }

    for(int i=0;i<5;++i){
      for(int j=0;j<3;++j){
        for(int k=0;k<4;++k){
            cout << A[i][j][k] << " ";
        }
        cout << endl;
      }
      cout << endl;
    }
}