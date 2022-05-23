#include <iostream>
#include <typeinfo>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cmath>

using namespace std;

class A{

    char *ptr;
    short len;

    public:
    A(short m,char c):len(m){
        ptr=new char[m];
        for(int i=0;i<m;++i){
            ptr[i]=rand()%(c-'a'+1)+'a';
        }
    }

    virtual string elab(short a,char c) = 0;

    short getLen(){
        return len;
    }

    ostream&print(ostream&os){
        
        os << "[ ";

        for(int i=0;i<getLen();++i){
            os << ptr[i] << " ";
        }

        os << " ], ";
        return os;
    }

    char &operator[](int i){
        return ptr[i];
    }

    protected:

    char get(short i){
        return ptr[i%len];
    }


};

ostream &operator<<(ostream&os,A&a){
    return a.print(os);
}

class B:public A{

    double x;
    
    public:
    B(short m,double y,char c):A(m,c),x(y){
    }

    double foo(short s){ 
        return sin(x+s)/log(x+s);
    }

    string elab(short a,char c){
        string s="";
        for(int i=0;i<getLen();++i){
            if(get(i)-c<=a){
                s+=get(i);
            }
        }
        return s;
    }

    ostream&print(ostream&os){

        A::print(os);
        
        os << "x= " << x;

        return os;
    }
};

template<typename T>
class C:public A{

    T y;

    public:

    C(short n,double k,char c):A(n,c){

        if(typeid(y)==typeid(short)){
            this->y=round(100*k);
        }
        else this->y=k;
    }

    string elab(short a,char c){
        
        string s="";
        if(getLen()>=a){
            for(int i=0;i<a;++i){
                s+=c;
            }
        }
        else {
            for(int i=0;i<getLen();++i){
                s+=get(i);
            }
        }
        return s;
    }

    double g(short w){
        return sin(w+y);
    }

     ostream&print(ostream&os){

        A::print(os);
        
        os << "y= " << y;

        return os;
    }
};

int main(){

    const int DIM=50;

    srand(111222333);

A *vett[DIM];

for(int i=0; i<DIM; i++) {
  short n=1+rand()%10;
    switch(rand()%3) {
      case 0: 
        vett[i]= new B(n, (double) rand()/RAND_MAX, rand()%('z' - 'a' + 1) + 'a');
	break;
      case 1:
	vett[i]= new C<double>(n, (double) rand()/RAND_MAX, rand()%('z' - 'a' + 1) + 'a');
	break;
      case 2:
	vett[i]= new C<short>(n, (double) rand()/RAND_MAX, rand()%('z' - 'a' + 1) + 'a');
      }
}

for(int i=0;i<DIM;++i){
    cout << "(" << i << " " << typeid(*vett[i]).name() << ", " << *vett[i] << ", elab(5)= " << (*vett[i]).elab(5,'z') << " ";
}

cout << endl;

double sb=0;
double sc=0;
int cb=0;
int cc=0;
for(int i=0;i<DIM;++i){
    if(typeid(*vett[i])==typeid(B)){
        sb+=dynamic_cast<B*>(vett[i])->foo(5);
        ++cb;
    }
    if(typeid(*vett[i])==typeid(C<short>)){
        sc+=dynamic_cast<C<short>*>(vett[i])->g(5);
        ++cc;
    }
}

cout << "B media= " << sb/cb << " , C media= " << sc/cc << endl;

(*vett[2])[2]='c';

cout << (*vett[2])[2];
}