#include <iostream>

using namespace std;

void stampa(int min, int max, int c) {
    cout << "si sono riscontrati ";
    cout << c;
    cout << " volte i valori dell'array W[l] all'interno del ";
    cout << min;
    cout << " e ";
    cout << max;
    cout << endl;
}

// 0, 1, 2
// 3, 4, 5
// 6, 7, 8

// 0, 1, 2, 3, 4, 5, 6, 7, 8

void es9_3(size_t n, size_t m, int *v, size_t l, int *w) {
    size_t i, j;
    int min, max, c;
    for(i = 0; i < n; i++) {                // per ogni riga della matrice V
        min = v[i * m];
        max = v[i * m];
        for(j = 0; j < m; j++) {            // per ogni elemento della riga
            if (v[i * m + j] < min) {       // aggiorna min
                min = v[i * m + j]; 
            } 
            if (v[i * m + j] > max) {       // aggiorna max
                max = v[i * m + j];
            }
        }
        c = 0;
        for (j = 0; j < l; j++) {           // per ogni elemento dell'array W
            if (min < w[j] && w[j] < max)  // se e` compreso tra min e max
                c++;
            
        }
        stampa(min, max, c);
    }
}

int main() {
    size_t n = 10, m = 10, l = 20; 
    srand(time(NULL)); 
    int V[n][m];
    int W[l];
    //popolamento matrice bidimensionale 
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            V[i][j] = rand() % 100 + 1; 
            cout << V[i][j];
            cout << '\t';
        }
        cout << endl;
    }

    cout << "\n popolando array monodimensionale..." << endl;

    //popolamento array monodimensionale
    for (size_t i = 0; i < l; i++) {
        W[i] = rand() % 200 - 50; 
        cout << W[i];
        cout << '\t';
    }
    cout << endl; 

    es9_3(n, m, (int *)V, l, W);
}