#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void printi(int*,int);
void swap(int*,int*);
void bubble(int*,int);    // 1 - Bubble
void selection(int*,int); // 2 - Selection
void insertion(int*,int); // 3 - Insertion
void merge(int*,int*,int*);// 
void mergeSort(int*,int); // 4 - Merge

int main(){

    int arr[] = {8,1,9,4,6,2,7,3,0,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int a=10, b=11;
   
    //bubble(arr,size);
    //selection(arr,size);
    //insertion(arr,size);
    mergeSort(arr,size);
    printi(arr,size);
    cout << size; 
    
    return 0;
}

void merge(int* L,int*R,int*A){
    int nL = sizeof(L)/sizeof(L[0]);
    int nR = sizeof(L)/sizeof(R[0]);
    int i = 0;
    int j = 0;
    int k = 0;
    //L[nL];
    //R[nR];
    while( i < nL && j < nR){ 
        if( L[i] <= R[j] ){
            A[k] = L[i];
            i = i + 1;
        }
        else{
            A[k] = R[j];
            j = j +1;
        }
        k = k + 1;
    }
    while(i < nL){
        A[k] = L[i];
        i++;
        k++;
    }
    while(j < nR){
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int* arr,int n){
    if( n < 2) return;
    int mid = n/2;
    int left[mid];
    int right[n-mid];
    for( int i = 0; i < mid -1; i++){
        left[i] = arr[i];
    }
    for( int i = mid; i < n-1; i++){
        right[i-mid] = arr[i];
    }
    mergeSort(left,mid);
    mergeSort(right,n-mid);
    merge(left,right,arr);
}

void insertion(int *arr, int n){
    for(int i = 1; i < n-1; i++){
        int value = arr[i];
        int hole = i;
        while(hole > 0 && arr[hole-1] > value){
            arr[hole] = arr[hole-1];
            hole = hole -1; 
        }
        arr[hole] = value;
    }
}

void selection(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for( int j = i+1; j < n; j++){
            if(arr[j]< arr[min]){
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }
}

void bubble(int *arr, int n){
    for(int i = 0; i < n-2; i++){
        for(int j = 0; j < n; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printi(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << " " << arr[i]; 
    }
}
