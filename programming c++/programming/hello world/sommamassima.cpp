#include <iostream>
#include <limits>

using namespace std;

int max_of(int a, int b) { return (a>b)? a:b;}
int max_of(int a, int b, int c) { return max_of(max_of(a,b),c);}

int crossingsum(int arr[],int l,int m,int h){

    int somma=0;
    int leftsum=INT_MIN;
    for(int i=m;i>=l;--i){
        somma+=arr[i];
        if(somma>=leftsum){
            leftsum=somma;
        }
    }

    somma=0;
    int rightsum=INT_MIN;
    for(int i=m+1;i<=h;++i){
        if(somma>=rightsum){
            rightsum=somma;
        }
    }
    return max_of(leftsum+rightsum,leftsum,rightsum);
}

int sommamax(int arr[],int l,int h){

    if(l==h)return arr[l];

   // int m=l+(h-l)/2;
   int m=(l+h)/2;

    int a=sommamax(arr,l,m);
    int b=sommamax(arr,m+1,h);
    int c=crossingsum(arr,l,m,h);

    return max_of(a,b,c);
}

int sommamassima(int arr[],int n){
   return sommamax(arr,0,n-1);
}

//O(n)

int main(){

      //  int vec[] = {-7,4,-8,3,4,-2,6,-10,1,3,-3,9};
    int vec[] = {24,-2,-2,-2,-2,22};

    int num = sizeof(vec)/sizeof(int);
    cout << sommamassima(vec,num);
    cout << endl << sizeof(vec); // 4 byte per ogni valore
}