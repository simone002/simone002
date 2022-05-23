#include <iostream>

using namespace std;

void f( int &x,int &y){ //passaggio di valori per reference

    x+= 100;
    y+= 200;

}

/*
int & f1(){ // sbagliato

    int a=10;
    return a;
}
*/

int *f2(){

    int *a= new int ();
    *a=10;
    return a;

}


int main(){

    int a=10;
    int b=15;


    int *ptr= &a;

    int *ptr1; // puntatore non inizializzato

    int *ptr2 = nullptr; // puntatore null

    ptr = &b;

    int &refint =a; // alias di a ovvero refint==a

    cout << "refint: " << refint << ", a= " << a << endl;

    refint=15; // a=15

    cout << "refint: " << refint << ", a= " << a << endl;

    f(a,b);

    cout << a << " ";
    cout << b << endl;

/*
    int x= f1(); // errore

    cout << x;

 */
  int *x=f2();
  a=*x;
  cout << a;
}