#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class A{
    char *s;
    short len;
    public:
    A(short m):len(m){
        s=new char[m];
        for(int i=0;i<m;++i){
            s[i]=(rand()%('z'-'a'+1)+'a');
        }
    }

    virtual double elab(short a) const{return 0;}

    short getLen(){
        return len;
    }

    ostream& print(ostream& os){
        os << "s= ";
        for(int i=0;i<len;++i){
            os << s[i];
        }
        return os;
    }

    protected:
    char get(short i){
        return s[i%len];
    }
};

    ostream& operator<<(ostream &os,A& a){

        return a.print(os);
}

class B:public A{

    int p;

    public:

    B(short m,int x):A(m),p(x){}

    double elab(short a){

        int nv=0;
        int nc=0;
        for(int i=0;i<getLen();++i){
            if(get(i)==toupper('a') || get(i)==toupper('e') ||  get(i)==toupper('i') ||  get(i)==toupper('o') ||  get(i)==toupper('u')){
                ++nv;
            }
            else ++nc;
        }
        return (double) nv/(nc+1);
    }

    ostream& print(ostream& os){
        A::print(os);
        os << "p= " << p;
        return os;
    }

    protected:
    bool test(){
        for(int i=0;i<4;++i){
            switch(toupper(get(i))){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                        return true;
            }
        }
        return false;
    }

};

class C:public A{

    char x;

    public:

    C(short n,char c): A(n),x(c){}

    double elab(short r){

        double nc=0;
        for(int i=r%getLen();i<getLen();++i){
            if(get(i)>=x){
                ++nc;
            }
        }
        return (double) nc/getLen();
    }

    string g(char c){
        string v="";
        v+=x;
        v+=c;
        return v;
    }



    ostream& print(ostream& os){
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
	if(rand()%2==0)
	  vett[i]= new B(n, rand()%10 + 1);
	else
	  vett[i]= new C (n, (char) (rand()%((int) 'z' - (int) 'a' + 1) + (int) 'a'));
	}

     for (int i=0;i<DIM;++i){
          cout << i << ")" << typeid(*vett[i]).name() << " " << *vett[i] << ", elab(3)"<< vett[i]->elab(3) << " ";
      }

    cout << endl;

    double s=0.0;
    string c="";
    for(int i=0;i<DIM;++i){
        s+=(*vett[i]).elab(3);
        if(typeid(*vett[i])==typeid(C)){
            c+=static_cast<C*>(vett[i])->g('h');
        }
    }

    cout << "media= "<< s/DIM << "stringa= " << c;
}

