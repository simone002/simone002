#include <iostream>
#include <sstream>

using namespace std;

int main(){
int n1= 32, n2=34;

stringstream ss;

ss << n1; //valori all'inter del buffer string
ss << n2;

cout << ss.str() << endl;

int x;
ss >> x; //estratto buffer ss con >>

cout << x << endl;

ss.clear(); // pulire il buffer e spostare l'eof= end of file levetta immaginaria di fine buffer ss

int y= 1;

ss << y;
cout << ss.str() << endl;

ss >> y; 

cout << y;
}
