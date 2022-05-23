#include <iostream>
using namespace std;

class portamonete{

    private:
    int monete_50_cent;
    int monete_1_euro;
    int monete_2_euro;

    public:
    portamonete(){
        this-> monete_50_cent=0;
        this-> monete_1_euro=0;
        this->monete_2_euro=0;
    }

    portamonete(int a,int b,int c):monete_50_cent(a),monete_1_euro(b),monete_2_euro(c){}

    void inserisci(double valore){
        int m=valore*10;
        switch(m){
            case 5:
            monete_50_cent++;
            break;
            case 10:
            monete_1_euro++;
            break;
            case 20:
            monete_2_euro++;
            break;
        }
    }

    void inserisci(double valore,int n){
        int m=valore*10;
        for(int i=0;i<n;++i){
            switch(m){
                case 5:
                monete_50_cent++;
                break;
                case 10:
                monete_1_euro++;
                break;
                case 20:
                monete_2_euro++;
                break;
            }
        }
    }

    int & get50cent(){return this->monete_50_cent;}
    int& get1euro(){return this->monete_1_euro;}
    int& get2euro(){return this->monete_1_euro;}

    double denaro(){return get50cent()*0.50+get1euro()+get2euro()*2;}
    void denaropertupo(){cout << get50cent() << " " << get1euro() << " " <<  get2euro();}

};

class portafoglio:public portamonete{
    int banconota5;
    int banconota10;
    int banconota20;
    public:
    portafoglio():portamonete(){
        this->banconota5=0;
        this->banconota10=0;
        this->banconota20=0;
    }
    portafoglio(int a,int b,int c,int d,int f,int g):banconota5(a),banconota10(b),banconota20(c),portamonete(d,f,g){}

    int & get5euro(){return this->banconota5;}
    int& get10euro(){return this->banconota10;}
    int& get20euro(){return this->banconota20;}

    void inserisci(double valore){
        int m=valore*10;
        switch(m){
            case 5:
            get50cent()++;
            break;
            case 10:
            get1euro()++;
            break;
            case 20:
            get2euro()++;
            break;
            case 50:
            get5euro()++;
            break;
            case 100:
            get10euro()++;
            break;
            case 200:
            get20euro();
            break;
        }
    }

    void inserisci(double valore,int n){
        int m=valore*10;
        for(int i=0;i<n;++i){
            switch(m){
                case 5:
                get50cent()++;
                break;
                case 10:
                get1euro()++;
                break;
                case 20:
                get2euro()++;
                break;
                case 50:
                get5euro()++;
                break;
                case 100:
                get10euro()++;
                break;
                case 200:
                get20euro();
                break;
            }
        }
    }

    double  denaro(){return get5euro()*5+get10euro()*10+get20euro()*20+portamonete::denaro();}
    void denaropertupo(){cout << get50cent() << " " << get1euro() << " " <<  get2euro() << " " << get5euro() << " " << get10euro() << " " << get20euro();}
};

int main(){

    portafoglio a= portafoglio(1,1,1,1,1,1);

    cout << a.denaro();


}