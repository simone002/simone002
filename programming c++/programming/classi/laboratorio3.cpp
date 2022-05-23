#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

class A{

    double *arr;
    short len;
    public:
    A(short m):len(m){
        arr=new double [m];
        for(int i=0;i<m;++i){
            arr[i]=rand()/(RAND_MAX*1.0);
        }
    }

    virtual double f(short a){return 0;}

    short getlen(){
        return len;
    }

   ostream &print(ostream&os){
        os<< "arr[ ";
        for(int i=0;i<len;++i){
            os << arr[i] << " ";
        }
        os << "]";
        return os;
    }

    double operator ()(int i1,int i2){

        double s=0;
        while (i1<=i2){
            s+=arr[i1];
        }
        return arr[i2]=s;
    }

    protected: 

    double get(short i){
        return arr[i%len];
    }
 
};

    ostream &operator << (ostream& os,A&a){
      return a.print(os);
    }

class B:public A{

    double p;

    protected:

    double foo(short s,int k){

        double s1=0;
        for(int i=s%getlen();i<getlen();++i){
            s+=get(i);
        }
        return s*k;
    }

    public:

    B(short m):A(m){
        double s=0;
        for(int i=0;i<getlen();++i){
            s+=get(i);
        }
        this->p=(double)s/getlen();
    }

    double f(short a){
        return log(foo(a,2*a)/p);
    }

    ostream &print(ostream&os){
        A::print(os);
        os << "p= " << p;

        return os;
    }
};

template<typename T>
class C:public A{
    T x;

    public:

    C(short n):A(n){
        if(typeid(x)==typeid(short)){
            this->x=n;
        }
        else this->x=log(1+(pow(sin(n),2)));
    }

    double f(short r){
        return g(r);
    }

    T g(T k){
        return 2*x*(k+1);
    }

    ostream &print(ostream&os){
        A::print(os);
        os << "x= " << x;

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
	    vett[i]= new B(n);
	    break;
	  case 1:
	    vett[i]= new C<double>(n);
	    break;
	  case 2: 
	    vett[i]= new C<short>(n);
	}
    }

    for(int i=0;i<DIM;++i){
        cout <<"(" << i <<" " << typeid(*vett[i]).name() << " " << *vett[i] << ", f(3)=" << vett[i]->f(3) << " ";
    }

    double s=0;
    double sc=0;
    int c=0;
    for(int i=0;i<DIM;++i){
        s+=vett[i]->f(3);
        if(typeid(*vett[i])==typeid(C<double>)){
            sc+=((static_cast<C<double>*>(vett[i]))->g(5));
            ++c;
        }
    }
    cout << endl;

    cout << "media tutti oggetti= " << s/DIM << "media oggetti di tipo C<double>= " << (double) sc/c;
    
    cout << endl;

    cout << vett[2]->operator()(1,4);

    

}

