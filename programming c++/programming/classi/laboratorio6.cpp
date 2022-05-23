#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

class A{

    char *str;
    short len;

    public:

    A(short m,string source):len(m){
        str=new char [m];
        for(int i=0;i<m;++i){
            str[i]=source[rand()%source.length()];
        }
    }

    virtual char func(short i)=0;

    short getlen(){
        return len;
    }

    virtual ostream &print(ostream&os){
        os << "str= ";
        for(int i=0;i<len;++i){
            os << str[i];
        }
        return os;
    }

    protected:

    char get(short i){
        return str[i%len];
    }
};

ostream &operator <<(ostream&os,A&a){

    return a.print(os);
}



class B:public A{

    short p;
    
    public:

    B(short m,string source):A(m,source){

        short i=1;
        for(int i=0;i<getlen();++i){
            switch (tolower(get(i))){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                ++i;
            }
        }
        this->p=i;
    }

    char func(short i){
        for(int j=i;j<getlen();++i){
            if(get(j)!='a' && get(j)!='e' && get(j)!='i' && get(j)!='o' && get(j)!='u'){
                return get(j);
            }
        }
        return 'X';
    }

    ostream &print(ostream&os){
        A::print(os);
        os << " p= " << p;
        return os;
    }
    
};

class C:public A{
    char x;

    public:
    C(short n,string source,char y):A(n,source),x(y){}

    char func(short i){
        for(int j=i;j<getlen();++j){
            if(get(j)>this->x){
                return get(j);
            }
        }
        return this->x;
    }

    string g(char c){
        string d="";

        d+=x;
        for(int i=0;i<getlen();++i){
            d+=get(i);
        }
        d+=c;
        return d;
    }

    ostream &print(ostream&os){
        A::print(os);
        os << " x= " << x;
        return os;
    }
};

int main(){}