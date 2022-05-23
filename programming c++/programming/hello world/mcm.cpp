#include <iostream>

using namespace std;

int main(){

    int a=50, b=200, MCA=a, MCB=b;

while(MCA!=MCB){
    if(MCA<MCB)
    MCA=MCA+a;
else{
    if(MCB<MCA)
    MCB=MCB+b;
}

}
cout << MCA << endl;
cout << MCB;

}

