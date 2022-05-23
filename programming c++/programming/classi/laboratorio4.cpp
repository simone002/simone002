#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

class A{

    private:

    short* arr;
    short len;

    public:
    A(short m):len(m){
        arr=new short [m];
        for(int i=0;i<m;++i){
            arr[i]=rand()%(10-1+1)+1;
        }
    }

    virtual double f(short a) {return 0;}

    short getlen(){return len;}

    ostream &print(ostream &os){
        os << "arr[";
        for(int i=0;i<len;++i){
            os << arr[i] << " ";
        }
        os << "]";
        return os;
    }

    protected:

    short get(short i){
        return arr[i%len];
    }
};

ostream & operator<<(ostream &os, A&a){
    return a.print(os);
}



template<typename T>
class B:public A{
    T x;

    public:

    B(short m,char c):A(m){
        string s= " ";
        if(typeid(x)==typeid(char)){
            this->x=c;
        }
    }

    double foo(short s){
        return log(s)+ sin(f(s));
    }

    double f(short a){
        double s=0;
        for(int i=a%getlen();i<getlen();++i){
            s+=get(i);
        }
        return (double) s/getlen();
    }

    ostream &print(ostream &os){
        A::print(os);
        os << "x= " << x;
        return os;
    }

};


class C:public A{

    int y;

    public:
    C(short n,int k):A(n),y(k){}

    double f(short a){
        int r=rand()%getlen();
        return (a+y)/get(r);
    }

    short g(short w){
        return sin(w+y);
    }

    ostream &print(ostream &os){
        A::print(os);
        os << "y= " << y;
        return os;
    }

};

int main(){

    const int DIM=50;

    A*vett[DIM];

     srand(111222333);

      for(int i=0; i<DIM; i++) {
	short n=1+rand()%10;
	switch(rand()%3) {
	  case 0: 
	    vett[i]= new C(n, rand()%10 + 1);
	    break;
	  case 1:
	    vett[i]= new B<string>(n, rand()%('z' - 'a' + 1) + 'a');
	    break;
	  case 2: 
	    vett[i]= new B<char>(n, rand()%('z' - 'a' + 1) + 'a');
	}
    }

    for (int i=0;i<DIM;++i){
          cout << i << ") " << typeid(*vett[i]).name() << " " << *vett[i] << ", foo(5)= "<< vett[i]->f(3) << " ";
      }
    



}