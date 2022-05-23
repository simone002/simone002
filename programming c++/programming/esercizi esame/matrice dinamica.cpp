#include <iostream>

using namespace std;

void f1(int *v[],int n, int m){ // primo modo

   for(int i=0;i<n;++i){
     for(int j=0;j<m;++j){
       v[i][j]=5;
    }
  }
} 

void f(int **v,int n,int m){ // secondo modo

  for(int i=0;i<n;++i){
    for(int j=0;j<m;++j){
      v[i][j]=5;
    }
  }
}

int main(){

    int **c = new int *[5];
    for(int i=0;i<5;++i){
        c[i]= new int [10];
    }
    f1(c,5,10);

    for(int i=0;i<5;++i){

      delete [] c[i];
    }

    delete [] c;
    c=nullptr;

}
