#include "streatch.h"
#include <iostream>

using namespace std;


        scarpe::scarpe(int t){  //costruttore
            dimensione=t;
            destra1=true;
            destra2=true;
            destra3=true;
            sinistra1=true;
            sinistra2=true;
            sinistra3=true;
        }
/*
        int scarpe::getdim(){
            return dimensione;
        }

        bool scarpe::getdestra1(){return destra1;}
        bool scarpe::getdestra2(){return destra2;}
        bool scarpe::getdestra3(){return destra3;}
        bool scarpe::getsinistra1(){return sinistra1;}
        bool scarpe::getsinistra2(){return sinistra2;}
        bool scarpe::getsinistra3(){return sinistra2;}

        bool scarpe::getstretch(int n,bool s){

            if(s){
                if(n==1){return destra1;}
                if(n==2){return destra2;}
                if(n==3){return destra3;}
            }
            else{
                if(n==1){return sinistra1;}
                if(n==2){return sinistra2;}
                if(n==3){return sinistra3;}
            }
                return false;
        }
*/

        void scarpe::stampa(){
            cout << "grandezza= " << dimensione << endl;
            cout << destra1 << endl;
            cout << destra2 << endl;
            cout << destra3 << endl;
            cout << sinistra1 << endl;
            cout << sinistra2 << endl;
            cout << sinistra3 << endl;
        }

        void scarpe::scegli(bool latoscarpa,int streatch){
            if(latoscarpa==true){
                if(streatch==1){
                    destra1=!destra1;
                }
                if(streatch==2){
                    destra2=!destra2;
                }
                if(streatch==3){
                    destra3=!destra3;
                }
            }
            else{
                if(streatch==1){
                    sinistra1=!sinistra1;
                }
                if(streatch==2){
                    sinistra2=!sinistra2;
                }
                if(streatch==3){
                    sinistra3=!sinistra3;
                }
            }
        }