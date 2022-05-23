#include <iostream>

using namespace std;

class s{
    int x;
    int y;
    int z;
    public:
    s(int n=3,int m=3,int k=3){
        x=n;
        y=m;
        z=k;
    }

    int getx(){
        return y;
    }
};

int main(){
    s a;

    cout << a.getx();
}