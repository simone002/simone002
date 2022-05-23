#include <iostream>

using namespace std;

int func(int***P,int n,int m,double z,short k){

    int cn=0;
    double s=0;

    for(int j=0;j<m;++j){
      for(int i=0;i<=n-k;++i){
          s=0;
          int seqlen=0;
          bool found=false;
          for(int l=i;l<n;++l){
              if(P[l][j]!=nullptr){
              ++seqlen;
              s+=*P[l][j];
            if(seqlen >= k && (double)s/seqlen < z){
              found=true;
              break;
            }
            }
          }
          if(found){
              ++cn;
              break;
          }
      }
    }
      return cn;
}

int main(){

    int n=4;
    int m=3;

    int ***P= new int **[n];
    for(int i=0;i<n;++i){
        P[i]= new int *[m];
        for(int j=0;j<m;++j){
            P[i][j]=new int ();
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> *P[i][j];
        }
    }

    cout << func(P,n,m,5.5,2);

}