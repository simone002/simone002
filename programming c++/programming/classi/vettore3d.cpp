#include <iostream>

using namespace std;

class Vettore3D{

    int x,y,z;

    public:

    Vettore3D(int i,int j,int k){
        x=i;
        y=j;
        z=k;
    }

    int getx() const {return x;}
    int gety() const {return y;}
    int getz() const {return z;}
};

  Vettore3D operator +(const Vettore3D sx,const Vettore3D dx){

      return Vettore3D (sx.getx()+  dx.getx(),
                        sx.gety()+ dx.gety(),
                        sx.getz()+ dx.getz()
                        );
  }


int main(){

    Vettore3D a(1,2,3);
    Vettore3D b(33,32,1);

    Vettore3D c=operator+(a,b);
}