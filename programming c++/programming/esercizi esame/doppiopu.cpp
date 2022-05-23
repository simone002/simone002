#include <iostream>
#include <ctime>
#include <cstdlib>


double **f(double**** A,int n,int m){



    double **B=new double *[n];
    for(int i=0;i<n;++i){
        B[i]= new double [m];
    }

    srand(time(NULL));

    double s=  (double) rand()/ (RAND_MAX)*2.0-1.0;

// b[N][M]
// a[m][n]

//A SCORRERE PER COLONNA
    for(int j=0;j<n;++j){
      for(int i=0;i<m;++i){
        if(**A[i][j]>s){
            B[j][i]=**A[i][j];
        }
        else{
            B[j][i]= **A[i%m][j%n];
        }
      }
    }

    return B;
}