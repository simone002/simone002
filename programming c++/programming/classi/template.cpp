#include <iostream>

using namespace std;

template <class T,class B>
bool func(T**Q,T n,B w){
     double sds=0;
  for(int i=0,j=n-1;i<n;++i){
      sds+=Q[i][j];
      --j;
  }

  for(int j=0;j<n;++j){
    double sc=0;
    for(int i=0;i<n;++i){
      sc+=Q[i][j];
    }
    if(sc/sds>w)
    return true;
  }
  return false;
}

template <class T,class B>
void foo(T c, B d){
  cout << "due parametri di tipo diverso";
}

template <class T>
void foo(T c, T a){
  cout << "due parametri dello stesso tipo";
}



int main(){

    /* int n=3;

    int **A=new int *[n];
    srand(time(NULL));

    for(int i=0;i<n;++i){
      A[i]=new int [n];
      for(int j=0;j<n;++j){
        A[i][j]=rand()%10;
        cout << A[i][j] << " ";
      }
      cout << endl;
    }

    if(func(A,n,0.2)){
      cout << "gg";
    }
    */

   foo(2,2);

   cout << endl;
   
   foo(2,2.0f);
   
}