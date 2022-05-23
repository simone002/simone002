#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool somma(double **D, int n,int m,int a){

    for(int j=0;j<m;++j){
        double somma=0;
      for(int i=0;i<n-1;++i){
        somma=D[i][j]+D[i+1][j];
        int b= round(somma);
        if(b==a){
          return true;
        }
      }
    }
}

bool func(string**Q,int n){


  string min=Q[0][0];
  string max=Q[0][0];

  for(int i=1;i<n;++i){
    if(max.length()<Q[i][i].length()){
      max=Q[i][i];
    }
    if(min.length()>Q[i][i].length()){
      min=Q[i][i];
    }
  }

  int vmin=0;
  int vmax=0;

  for(int i=0;i<min.length();++i){
    switch (min[i])
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      ++vmin;
      break;
    }
  }

  for(int i=0;i<max.length();++i){
    switch (min[i])
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      ++vmax;
      break;
    }

    if(vmin>vmax){
    return true;
    }

    return false;
}