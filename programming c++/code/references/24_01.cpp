#include <iostream>

using namespace std; 

class ClasseX{
  int x; 

  public: 
    ClasseX(int a){
      x = a;
    }

    int getX(){
      return x; 
    }
};

int &f(int *v,int c){
  return v[c];
}

int main(){
  //int &rr = {1}; // NO! rr non e' const!
  const int &r = {1}; // OK: {1} rappresenta un rvalue

  const ClasseX &objRef = {1}; // OK: objRef e' const
  int arr[3]={0,0,3};
  int crr[3]={0,2,3};
  cout << *(arr+2) << endl;
  cout << f(arr,2);

  //ClasseX &objRef1 = {10}; // NO! si legga l'errore del compilatore..
  
}
