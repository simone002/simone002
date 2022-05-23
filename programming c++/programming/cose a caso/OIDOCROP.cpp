#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
        int u=1;
        int n,m;
        cout << "inserire dimensione matrice: ";
        cin >> n >> m;

        unsigned short k=0,f=0;


        bool proprietà =false;
        

        string A[n][m];

        for(int i=0;i<n;++i){
          for(int j=0;j<m;++j){
              cin >> A[i][j];
          }
        }

        for(int i=0;i<n;++i){
          for(int j=0;j<m;++j){
            for(int b=0;b<A[0][0].length();++b){
              if(A[i][j][b]>='a' && A[i][j][b]<='z'){
                 }
               else{
                 ++f;
               }
            }
          }
        }
}
            
