#include <iostream>

using namespace std;

int *f(int n){
    int *A=new int [n];
    for(int i=0;i<n;++i){
        cin >> A[i];
    }

    return A;
}

void f(int *arr,int n){
    for(int i=0;i<n-1;++i){
        int min=i;
        for(int j=i;j<n;++j){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int n;
    cout << "inserisci una dimensione dell'array" << endl;
    cin >> n;
    int *arr=f(n);
    char a;

    while(1){
        cout << "vuoi aggiungere un elemento? (y/n)" << endl;
        cin >> a;
        
       
        if(a=='y'){
            cout << "quanti?" << endl;
            int b;
            cin >> b;
            n+=b;
            arr=f(n);
            f(arr,n);
            break;
        }
        else break;
    }
    
}