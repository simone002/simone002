#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void riordinamento(int*arr,int n){

    for(int i=0;i<n-1;++i){
        int min=i;
        for(int j=i+1;j<n;++j){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

void insertionsort(int A[],int n){

    for(int i=1;i<n;++i){
        int chiave=A[i];
        int j=i-1;
        while(j>=0 && A[j]>chiave){
            A[j+1]=A[j];
            --j;
        }
        A[j+1]=chiave;
    }
}


int BinarySearch (int a[], int low, int high, int key)
{
    int mid;

    if (low == high)
        return low;

    mid = low + ((high - low) / 2);

    if (key > a[mid])
        return BinarySearch (a, mid + 1, high, key);
    else if (key < a[mid])
        return BinarySearch (a, low, mid, key);

    return mid;
}

void BinaryInsertionSort (int a[], int n)
{
    int ins, i, j;
    int tmp;

    for (i = 1; i < n; i++) {
        ins = BinarySearch (a, 0, i, a[i]);
        if (ins < i) {
            tmp = a[i];
            for (j = i - 1; j >= ins; j--)
                a[j + 1] = a[j];
            a[ins] = tmp;
        }
    }
}

/*int bynaryelementresearch(int a[],int n){
    int i,j;
    int el=10;
    for(i=1;i<n;i++){
        int a[i]=
    }
}
*/

void stampa(int A[],int n){
    for(int i=0;i<n;++i){
        cout << A[i] << " ";
    }
    cout << endl;
}

void bubblesort(int**arr,int n,int m){

    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
           int min=j;
            for(int k=j+1;k<m;k++){
                if(arr[i][j]>arr[i][min]){
                    min=k;
                }
            }
            int temp=arr[i][min];
            arr[i][min]=arr[i][j];
            arr[i][j]=temp;
        }
    }
}

void bubblesort2(int A[],int n){

    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-i-1;++j){
            int beforevalue=A[j];
            int aftervalue=A[j+1];

            if(beforevalue>aftervalue){
                A[j+1]=beforevalue;
                A[j]=aftervalue;
            }
        }
    }

}

void bubblesort3(int a[],int n){

    bool ciao=true;

    while(ciao){
        ciao=false;
        for(int i=0;i<n-1;++i){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                ciao=true;
            }
        }
    }
}

void merge(int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
  
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
  
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
  
    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
        indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array
  
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}

void mergesort(int a[],int l,int h){
    if(l>=h){return;}
        int mid=l+(h-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
}

void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int partition1(int arr[],int l,int h){

    int chiave=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;++j){
        if(arr[j]<chiave){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;
}

void quicksort(int arr[],int l,int h){
    if(l<h){
        int pi=partition1(arr,l,h);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,h);
    }
}

void quicksortnopartion(int v[],int l,int h){ //O(logn)

    int i=l,j=h;
    int tmp;
    int pivot=v[(l+l)/2];
    while(i<=j){
        while(v[i]<pivot){i++;} // se > decrescente
        while(v[j]>pivot){j--;} // se < decrescente
        if(i<=j){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    if(l<j){quicksortnopartion(v,l,j);}
    if(i<h){quicksortnopartion(v,i,h);}
}

void quicksortnopartion(int*arr,int n){
    quicksortnopartion(arr,0,n-1);
}



int main(){

    int n=4;

    srand(time(NULL));
/*
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
    */

    int *arr1=new int[n];

    for(int i=0;i<n;++i){
        arr1[i]=rand()%10;
        cout << arr1[i] << " ";
    }

    cout << endl;
    cout << "riordinamento..." << endl;
    cout << endl;

    quicksortnopartion(arr1,n);
    stampa(arr1,n);





}