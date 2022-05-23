#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class A{

    private:
    int* arr;
    short len; 

    public:
    A(short m,int a,int b):len(m){
        arr=new int [m];
        for(int i=0;i<m;++i){
            arr[i]=rand()%(b-a+1)+a;
        }
    }
    
    short getlen(){
        return len;
    };

    ~A(){
        delete arr;
    }

    virtual double func(short i){return 0;}


    double get(short i){
        return arr[i%len];
    }

    int &operator [](int i){
        return arr[i%len];
    }
    
    virtual ostream &print(ostream &os){
        os<< "arr=[";
        for(int i=0;i<getlen();++i){
            os<< arr[i] << " ";
        }
        os << "]";
        return os;
    }
    friend ostream &operator<<(ostream &os,A&a){
       return a.print(os);
    }

};


/*ostream &operator <<(ostream &os,A&a){
    return a.print(os);
}*/

class B:public A{

    private:

    double p;

    public: 

    B(short m,int y,int z, double x): A(m,y,z),p(x){   
        this->p=x;
    }


    double func(short i){
        int min=get(0);
        int max=get(0);
        for(int i=1;i<getlen();++i){
            if(min>get(i)){
                min=get(i);
            }
            if(max<get(i)){
                max=get(i);
            }
        }

        return ((double) min/max) + p;
    }

    ostream &print(ostream &os){
         A::print(os);
         os<< "p=" << p;
         return os;
     }

    
};
class C: public A{

    private: 
     char t;
    
    public:

    C(short n,char c,int a,int b): A(n,a,b){
        this->t=c;
    }

    double func(short i){
        double s=0;
        for(int i=0;i<getlen();++i){
            s+=get(i);
        }
        return (double) s/getlen();
    }

    string g(char c,short k){
        string s= "";
        for(int i=0;i<k;++i){
        s+=t;
        s+=c;
        }
        return s;
    }

    ostream &print(ostream &os){
         A::print(os);
         os<< "t=" << t;
         return os;
     }

};



int main(){

   const int DIM=50;
   A*vett[DIM];

    srand(111222333);     


    for(int i=0; i<DIM; i++){
	    short n=1+rand()%10;
	    if(rand()%2==0)
	     vett[i]= new B(n, rand()%5+1, rand()%11+10, (double) rand()/(RAND_MAX));
	    else
	     vett[i]= new C(n, (char) (rand()%('z' - 'a' + 1) + 'a'), rand()%5+1, rand()%11+10);
    }


    for (int i=0;i<DIM;++i){
          cout << i << ")" << typeid(*vett[i]).name() << " " << *vett[i] << ", foo(5)"<< vett[i]->func(5) << " ";
    }


    cout << endl;

    double sum=0;
      for(int i=0;i<DIM;i++){
            sum+=(*vett[i]).func(3);
    }

    int c=0;
    for(int i=0;i<DIM;++i){
        if(typeid(*vett[i])==typeid(C)){
           cout << ((C*)vett[i])->g('h',2)<< endl;
           ++c;
        }
        if(c==3){
            break;
        }
    }

    cout << sum/DIM << endl;

    (*vett[5])[3]=20;

  //  cout << (*vett[5])[3];

  char b {'m'};

    cout << b;

  
}