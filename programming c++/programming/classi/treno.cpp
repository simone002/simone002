#include <iostream>

using namespace std;

class treno{

    int n_vagoni;
    int p_max_vagoni;
    int p_vagoni;

    public:

    int pmax()
    {
        return n_vagoni*p_max_vagoni;
    }

    treno(int t,int p,int c){
        n_vagoni=t;
        p_max_vagoni=p;
        p_vagoni=c;
    }

    treno(int t,int p):treno(t,p,0){}

    int getviaggiatori(){
        return p_vagoni;
    }
    int getvagoni(){
        return n_vagoni;
    }

    int p_max_vagoni(){
        return p_max_vagoni;
    }

    int sali(int p){
        p_vagoni+=p;
        if(p_vagoni > pmax()){
            int passterra= p_vagoni-pmax();
            return passterra;
            p_vagoni=pmax();
        }
        else return 0;
    }

    int scendi(int p){
        if(p_vagoni > p){
            p_vagoni-=p;
            return p;
        }
        else
        p= p_vagoni;
        p_vagoni=0;
        return p;
    }

    float passeggierimedio(){
        return double(p_vagoni)/n_vagoni;
    }


};
