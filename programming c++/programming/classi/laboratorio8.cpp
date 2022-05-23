#include <iostream>

using namespace std;

class A{

    int *ptr;
    short len;

    public:

    A(short m,short k):len(m){

        ptr=new int[m];
        for(int i=0;i<m;++i){
            ptr[i]=rand()%(k-1+1)+1;
        }
    }

    virtual double const f()=0;

    int get(short i){
        return ptr[i%len];
    }

    short getlen(){
        return len;
    }
    virtual ostream& print(ostream& os){

        os << "[ ";

        for(int i=0;i<len;++i){
            os << ptr[i] << " ";
        }

        os << " ]";
        return os;
    }

    int &operator [](int i){
        return ptr[i%len];
    }

};

ostream& operator << (ostream&os,A&a){
    return a.print(os);
}

class B:public A{

    double p;

    public:

    B(short m,short k,double y):A(m,k),p(y){}

    double const f(){

        double s=0;
        for(int i=0;i<getlen();++i){
            if(get(i)%2==0){
                s+=get(i);
            }
          }
            if(s!=0)
            return s/p;

            return 0;
      
    }

    ostream& print(ostream& os){

        A::print(os);

        os << "p= " << p;

        return os;
    }

};

class C:public A{

    char x;

    public:

    C(short n,short k,char c):A(n,k),x(c){}

    double const f(){
        double s=0;
        int c=0;
        for(int i=0;i<getlen();++i){
            if(get(i)%2==1){
                s+=get(i);
                ++c;
            }
        }
        if(s!=0){
            return s/c; 
        }
        return 0;
    }

    string const g(char c){

        string s="";
        s+=x;
        s+=c;

        return s;
    }

    ostream& print(ostream& os){

        A::print(os);

        os << "x= " << x;

        return os;
    }

};

int main(){

    const int DIM=50;

    srand(111222333);
      A *vett[DIM];

      for(int i=0; i<DIM; i++){
	short n=1+rand()%10;
	short m = 1+rand()%8;
	if(rand()%2==0)
	  vett[i]= new B(n, m, rand()/(double) RAND_MAX+0.05);
	else
	  vett[i]= new C(n, m, (char) (rand()%('z' - 'a' + 1) + 'a'));
      }

      for(int i=0;i<DIM;++i){

          cout << "(" << i << " " << typeid(*vett[i]).name() << " " << *vett[i] << ", f()= " << (*vett[i]).f() << endl;

      }

      double s=0;
      string concatenazione="";

      for(int i=0;i<DIM;++i){
          s+=vett[i]->f();
          if(typeid(*vett[i])==typeid(C)){
              concatenazione+=static_cast<C*>(vett[i])->g('h');
          }
      }
      cout << endl;

      cout << "media s= " << s/DIM << ", concatenazione= " << concatenazione;


}