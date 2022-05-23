#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class A{

    char*str;
    short len;
    
    public:
    A(short m):len(m){
        str=new char[m];
        for(int i=0;i<m;++i){
            str[i]=rand()%('z'-'a'+1)+'a';
        }
    }

    virtual double elab(short a) const  {return 0;}

    int getlen() const {
        return len;
    }

   virtual ostream &print(ostream& os){

            os << "w= ";
            for(int i=0;i<len;++i){
            os << str[i];
            }
            return os;
        }

    protected:
    char get(short i) const {

        return str[i%len];
    }

};

ostream &operator <<(ostream &os,A& a){

    return a.print(os);
}


class B:public A{

    int p;

    public:

    B(short m,int x):A(m),p(x){}

    double elab(short a) const{

        short*arr=map();

        double sum=0;
        for(int i=0;i<a;++i){
            sum+=arr[i];
        }
        return (double) sum/p;
    }

        ostream &print(ostream& os){
            A::print(os);
            os << ", p= " << p;
            return os;
        }

        int &operator++(int a){
          return  ++p;
        }

    protected:

    short *map() const {

        short*arr=new short [getlen()];

        for(int i=0;i<getlen();++i){
            if(get(i)=='a'|| get(i)=='e'|| get(i)=='i'|| get(i)=='o' || get(i)=='u' ){
                arr[i]=0;
            }
            else arr[i]=1;
        }
        return arr;
    }



};

class C:public A{

    char x;

    public:

    C(short n,char c):A(n),x(c){
    }

    double elab(short r) const {

        int c=0;

        for(int i=r%getlen();i<getlen();++i){
            if(get(i)>=x){
                ++c;
            }
            
        }
        return (double) c/getlen();
    }

    string g(char c){

        string s="";

        s+=x;
        s+=c;

        return s;
    }

        ostream &print(ostream& os){

            A::print(os);
            os << ", x= " << x;
            return os;
        }

};

int main(){

    const int DIM=50;

     srand(111222333);

      A *vett[DIM];

      for(int i=0; i<DIM; i++) {
	short n=1+rand()%10;
	if(rand()%2==0)
	  vett[i]= new B(n, rand()%10 + 1);
	else
	  vett[i]= new C(n, (char) (rand()%('z' - 'a' + 1) + 'a'));
	}

    for(int i=0;i<DIM;++i){
        cout << "(" << i << " " << typeid(*vett[i]).name() << " " << *vett[i] << ", elab(3)= " << (*vett[i]).elab(3) << endl;
    }

    cout << endl;

    double sum=0;
    string s="";
    for(int i=0;i<DIM;++i){
        sum+=(*vett[i]).elab(3);
        if(typeid(*vett[i])==typeid(C)){
            s+=static_cast<C*>(vett[i])->g('h');
        }
    }

    cout << "media di elab(3)= " << sum/DIM << endl;
    cout << "stringa concatenazione g('h')= " << s << endl;

    B a(2,4);

    cout << a++;






}