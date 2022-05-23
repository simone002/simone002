#include <iostream>

using namespace std;

int main(){

    string s1= "paperino", s2="paperina";
    if(s1.compare(2,3,s2,2,3) == 0) cout << "uguali\n"; // confrontare stringa 1 e 2 dal carattere 2 al 4

}