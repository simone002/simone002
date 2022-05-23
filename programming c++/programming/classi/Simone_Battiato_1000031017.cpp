#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
#include <cmath>

using namespace std;

class A{

    double *vec;
    short len;

    public:

    A(short w,double a,double b):len(w){

        vec=new double[w];
        for(int i=0;i<w;++i){
            vec[i]=rand()/(b-a+1.0)+a;
        }
    }

    virtual bool test (short a)=0;
    
    virtual ostream& print(ostream&os){

        os << "[ ";

        for(int i=0;i<len;++i){

            os << vec[i] << " ";
        }

        os << " ]";

        return os;
    }

    double &operator[](int i){
        return vec[i];
    }

    protected:

    double select(double x){

        double s=0;
        int c=0;
        for(int i=0;i<len;++i){
            if(vec[i]<=x){
                s+=vec[i];
                ++c;
            }
        }
        return s/c;
    }
};

ostream& operator<<(ostream&os,A&a){

    return a.print(os);
}

class B:public A{

    short p;

    public:

    B(short m,short a,short b):A(m,a,b){

        this->p=rand()%(-b+a-1)-a;
    }

    bool test(short a){
        if(p>=a){
            return true;
        }
        return false;
    }

    ostream& print(ostream&os){

        A::print(os);

        os << "p= " << p;

        return os;
    }


};

template<typename T>
class C:public A{

    T alpha;

    public:

    C(short n,double x,double y):A(n,x,y){

        if(typeid(alpha)==typeid(short)){
            alpha=n;
        }

        this-> alpha=rand()/(-y+x-1.0)-x;
    }

    bool test(short r){

        if((double)g(r)/alpha>=1){
            return true;
        }
        return false;
    }

    double g(double k){
        return select(k)*2;
    }

    ostream& print(ostream&os){

        A::print(os);

        os << "alpha= " << alpha;

        return os;
    }

};

int main(){


const int DIM=50;

A *vec[DIM];

srand(11223367);

  for(unsigned short i=0; i<DIM; i++){
    short r = rand()%3;
    if(r==0) //
      vec[i] = new C<double>(rand()%5+5, 
			    rand()%5+5 + rand()/(RAND_MAX*1.0), 
			    rand()%10+10 + rand()/(RAND_MAX*1.0));
    else if(r==1)
      vec[i] = new C<short>(rand()%5+5, 
			    rand()%5+5 + rand()/(RAND_MAX*1.0), 
			    rand()%10+10 + rand()/(RAND_MAX*1.0));
    else // B       
      vec[i] = new B(rand()%5+5, rand()%5+5, rand()%15+10);
  }

  for(int i=0;i<DIM;++i){

      cout << "(" << i << " " << typeid(*vec[i]).name() << " " << *vec[i] << endl;
  }

  double max=0;
  for(int i=0;i<DIM;++i){
    if(typeid(*vec[i])==typeid(C<double>)){
        double max=static_cast<C<double>*>(vec[i])->g(12);
        break;
    }
  }

  for(int i=0;i<DIM;++i){
    if(typeid(*vec[i])==typeid(C<double>)){
        double max1=static_cast<C<double>*>(vec[i])->g(12);
        if(max<max1){
            max=max1;
        }
    }
  }

  int contatore_test=0;

  for(int i=0;i<DIM;++i){
      if((*vec[i]).test(12)){
          ++contatore_test;
      }
  }

  cout << endl;

  cout << "max g(12)= " << max << " " << "test(12)" << contatore_test << endl;

  (*vec[2])[1]=2.0;

  cout << (*vec[2])[1];
}