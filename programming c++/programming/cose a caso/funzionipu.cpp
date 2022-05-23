#include <iostream>

using namespace std;

void f(short *ptr)
{
    *ptr+=2;
    cout << ptr << endl;
}

int main()
{
    short a=19;
    f(&a);
    cout << a;
}