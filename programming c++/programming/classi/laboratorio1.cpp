#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cmath>
#include <typeinfo>

using namespace std;

/* */

class A{

    protected:
    double *ptr;
    short len;

    public:

    A(short n){
        ptr=new double [n];
        for(int i=0;i<n;++i){
            ptr[i]=rand()/(RAND_MAX*1.0);
        }
        this->len=n;
    }

    virtual double foo(short a) const {return 0;}; // metodo virtuale puro

    double &operator[](int i){
        return ptr[i%len];
    }

   virtual ostream &print(ostream &os){
        os<< "ptr=[";
        for(int i=0;i<len;++i){
            os<< ptr[i] << " ";
        }
        os << "]";
        return os;
    }
};

ostream &operator <<(ostream &os,A& a){
    return a.print(os);
}

class B:public A{

    double alpha;
    double extract(short s) const{
        return (ptr[s%len]+alpha)/2.0;
    }

    public:

    B(short m,double d): A(m),alpha(d){}

    double foo(short b) const{

        return log(1+extract(b));
    }

     ostream &print(ostream &os){
         A::print(os);
         os<< "alpha=" << alpha;
         return os;
     }
};

template<typename T>
class C:public A{
    T x;

    public:
    C(short n): A(n){
        if(typeid(x)==typeid(short))
        x=g(n);
        else
        x=log(1+n);
    }
    double foo(short r) const{
        return g(r*x);
    }
    T g(T k) const{
        return 3*k;
    }

     ostream &print(ostream &os){
         A::print(os);
         os<< "x=" << x;
         return os;
     }
};

int main(){

 const int DIM=30;

    A*vett[DIM];

     srand(328832748);
      for(int i=0; i<DIM; i++) {
	short n=1+rand()%5;
	switch(rand()%3) {
	  case 0: vett[i]= new B(n, n/100.0); break;
	  case 1: vett[i]= new C<double>(n);break;
	  case 2: vett[i]= new C<int>(n);
	}
      }

      for (int i=0;i<DIM;++i){
          cout << i << ") " << typeid(*vett[i]).name() << " " << *vett[i] << ", foo(5)"<< vett[i]->foo(5) << " ";
      }

      cout << endl;

      double max=vett[0]->foo(5);
      double sum=0.0;
      for(int i=0;i<DIM;i++){
          if(vett[i]->foo(5)>max){
              max=vett[i]->foo(5);
          }
          if(typeid(*vett[i])==typeid(C<double>))
            sum+=((static_cast<C<double>*>(vett[i]))->g(5));
      }

      cout << "max= " << max << ", sum= " << sum << endl;

      (*vett[5])[3]=5;

      cout << (*vett[5])[3];

}