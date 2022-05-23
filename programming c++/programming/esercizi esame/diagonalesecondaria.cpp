#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

        int n,m;
        cin >> n >> m;

        double A[n][m];

        for(int i=0;i<n;++i){
          for(int j=0;j<m;++j){
              A[i][j]=  (double) rand()/(RAND_MAX)*100.0-50.0; // double randomici in un range
          }
        }

         for(int i=0;i<n;++i){ //ciclo per muoversi nella diagonale secondaria
          for(int j=0;j<m;++j){
              cout << A[i][j] << " ";
          }
          cout << endl;
         }

         cout << endl;

         for(int i=0,j=m-1;i<n;++i){
             cout << A[i][j] << " ";
             --j;
         }
         cout << endl;

           for(int i=0,j=m-1;i<n;++i){
             cout << A[i][j] << " ";
             --j;
         }
}
