#include <iostream>

using namespace std;

template<typename T>
class STR{

    T***arr;
    int x,y,z;

    public:

    STR(int a,int b, int c, T d){
        arr= new T**[a];
        for(int i=0;i<a;++i){
            arr[i]=new T*[b];
            for(int j=0;j<b;++j){
                arr[i][j]= new T[c];
                for(int k=0;k<c;++k){
                    arr[i][j][k]= d;
                }
            }
        }
        this->x = a;
        this->y = b;
        this->z = c;
    }

    T &operator ()(int i,int j, int k){
        return arr[i][j][k];
    }

    template<typename C>
  void  foo(C a){
        cout << a;
    }

    

};

int main(){

 STR<double> ciao(2,3,4,5);

    ciao(1,2,2)=50;

    cout << ciao(1,2,2);

    ciao.foo(2.5);
}

