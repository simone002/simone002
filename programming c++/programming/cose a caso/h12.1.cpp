#include <iostream>
#include <iomanip>

using namespace std;

int main() {

        double y, x;
        cin >> y >> x;

        while (y != 0) {
            if (y < 0)
                cout << "inserisci un numero maggiore di 0 con la virgola" << endl;
            else if (x > 1)
                cout << "inserisci un numero minore di 1 con la virgola" << endl;
            else
                y = y * x;
            cout << setprecision << "0 negativo: " << endl << y;
        }
}
