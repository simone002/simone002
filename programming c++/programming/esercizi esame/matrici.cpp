#include <iostream>

using namespace std;

#define N 4
#define M 5
#define C 6

int main(){

    int v[N][M];
    int m[N][C];

    for(int i=0;i<N;++i){
      for(int j=0;j<M;++j){
        v[i][j]=5;
      }
      for(int j=0;j<C;++j){
        m[i][j]=6;
      }
    }

    for(int i=0;i<N;++i){
      for(int j=0;j<M;++j){
        cout << v[i][j] << " ";
      }
      cout << " ";
      for(int j=0;j<C;++j){
        cout << m[i][j] << " ";
      }
      cout << endl;
    }
      
    

}