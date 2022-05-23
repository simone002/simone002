#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int f1(long **A,int n,int m, long x){

    int B[m];

    for(int j=0;j<m;++j){
      int c=0;
      for(int i=0;i<n;++i){
        if(A[i][j]==x){
          ++c;
        }
      }
      B[j]=c;
    }

    int max=B[0],index=0;
    for(int i=1;i<m;++i){
      if(max<=B[i]){
        max=B[i];
        index=i;
      }
    }

    return index;
}

int main(){

    srand(time(NULL));

    int n=10;
    int m=10;
    long x=4;
    
    long **A=new long *[n];

    for(int i=0;i<n;++i){
      A[i]=new long [m];
      for(int j=0;j<m;++j){
        A[i][j]=rand()%5;
      }
    }

    for(int i=0;i<n;++i){
      for(int j=0;j<m;++j){
        cout << A[i][j] << " ";
      }
      cout << endl;
    }

    cout << endl;
    cout << f1(A,n,m,x);
}
