#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

template<typename T>
class Character{

    private: 

    T*** power;

    protected:

    int rows;
    int column;
    T** getcolumn(int index){
        T**V=new T*[rows];
        for(int i=0;i<rows;++i){
            V[i]= power[i][index];
        }
        return V;
    }

    public:
    Character(int rows,int columns):rows(rows),column(column){
        power=new T**[rows];
        for(int i=0;i<rows;++i){
            power[i]=new T*[column];
            for(int j=0;j<column;++j){
                power[i][j]=new T();
                *power[i][j]=(double)rand()/(RAND_MAX)*1.0;
            }
        }
    }

    void traspose(){
        int tmp= rows;
        rows= column;
        column=tmp;
        int pt[rows][column];
        for(int i=0;i<rows;++i){
            for(int j=0;j<column;++j){
                pt[i][j]=*power[j][i];
            }
        }
    
    }

    virtual double attack() =0;
};

template<typename T>
class wizard: public Character<T>{

    public:
    wizard(int rows,int columns):Character<T>(rows,columns){
        wizard<T> p(rows,columns);
        traspose(p);
    }

    T attack(){
        for(int )
    }
};

int main(){}