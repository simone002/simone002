#include <iostream>

using namespace std;

class matita{

    int matita_length;
    public:
    matita(int a):matita_length(a){}

};

class Matitacongommino:public matita{

    int matitacongommino;

    public:
    Matitacongommino(int a, int b):matita(a),matitacongommino(b){}

    void canc(){
        while(matitacongommino>0){
            cout << "cancellato";
            --matitacongommino;
        }
    }
};


int main(){

    Matitacongommino B(10,10);
}
