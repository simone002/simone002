#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A(int b):x(b){
        
    }

    int &getA(){
        return x;
    }

   /* A(const A&a){
        x=a.x;
    } */
};

int main(){

    A a=A(23);
    A b=a;
    cout << &a << endl;
    cout << &b;
    a.getA()=23;
    cout << endl;
    cout << a.getA();
    cout << b.getA();


}