#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void bubblesort(int**arr,int n,int m){

    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
           int min=j;
            for(int k=j+1;k<m;k++){
                if(arr[i][k]<arr[i][min]){
                    min=k;
                }
            }
            int temp=arr[i][min];
            arr[i][min]=arr[i][j];
            arr[i][j]=temp;
        }
    }
}

int main(){

    int n=4;

    srand(time(NULL));

    int **arr=new int*[n];
    for(int i=0;i<n;++i){
        arr[i]=new int[n];
        for(int j=0;j<n;++j){
            arr[i][j]=rand()%10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    bubblesort(arr,n,n);

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}