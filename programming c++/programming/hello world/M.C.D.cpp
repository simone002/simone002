#include <iostream>

using namespace std;

int MCD(int a, int b){

    int r;
    while(b!=0){

        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int MCM(int a,int b){

    int Ma=a,Mb=b;

    while(Ma!=Mb){

        if(Ma<Mb){
            Ma+=a;
        }
        if(Mb<Ma){
            Mb+=b;
        }
    }

    return Ma;
}

int euclide(int a,int b){
    
if (b==0)
return a;
else 
return euclide(b, a%b);
}

int main(){

    int a=100; int b=23;

    cout << MCD(a,b) << ", " << MCM(a,b)<< endl;

    cout << euclide(a,b);

    cout << endl;

    cout << 100%5;
}