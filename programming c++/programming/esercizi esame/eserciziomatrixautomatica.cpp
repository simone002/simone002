#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
#define M 6

int f2(bool (*v)[M],int n);

int f1(bool **v,int n,int m){ // allocazione dinamica

  srand(time(NULL));

  int i=n/2;
  int j=n/2;
  int libri_raccolti=0;
  int r;

  while(i>=0 && j>=0 && i<n && j<n){
    if(v[i][j]){
    libri_raccolti++;
    v[i][j]=0;
    }
    r=rand()%4;
    switch(r){
      case 0:
            --i;
            break;
      case 1:
            ++i;
            break;
      case 2:
            ++j;
            break;
      case 3:
            --j;
            break;
    }
  }
  return libri_raccolti;
}

int main(){

  srand(time(NULL));

  bool **a= new bool *[5];
  for(int i=0;i<5;++i){
    a[i]= new bool [5];
  }
  
  for(int i=0;i<5;++i){
    for(int j=0;j<5;++j){
      a[i][j]=rand()%2;
    }
  }

  for(int i=0;i<5;++i){
    for(int j=0;j<5;++j){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  cout << f1(a,5,5);
}
