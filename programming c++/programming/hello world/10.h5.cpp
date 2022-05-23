#include <iostream>

using namespace std;

int main(){

    char carattere = ' ';
    cin >> carattere;

    switch(carattere)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout << (int) carattere;
        break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cout << carattere;
        break;
        case '2':
        cout << carattere*10;
        break;
    }
    
}