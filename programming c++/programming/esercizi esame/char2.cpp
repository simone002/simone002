#include <iostream>

using namespace std;

int main(){

    int n=2,t=0;
    char c[n][n];

    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        cin >> c[i][j];
      }
    }


    for(int j=0;j<n;++j){
        t=0;
      for(int i=0;i<n;++i){
          if(c[i][j]==c[i][i]){
              ++t;
          }
      }
      if(t==n){
          cout << "gg";
      }
    }
}


