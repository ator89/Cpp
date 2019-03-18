#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void swap(int*,int*);
void print(int[],int);
void bubble(int[],int);
void selection(int[],int);

int main(){
    int lista[] = {1,6,4,8,9,0,7,5};
    int arr2[] = {2,8,4,6,9,7,1,5,3,0};
    int n = sizeof(arr2)/sizeof(arr2[0]);
    int sizel = sizeof(lista)/sizeof(lista[0]);
    print(lista,sizel);
    print(arr2,n);
    selection(arr2,n);
    print(arr2,n);
    //bubble(lista,sizel);
    print(lista,sizel);
   // lista[] = {1,6,4,8,9,0,7,5};
    cout << "Valores antes de ordenar: \n";
    for(int i = 0; i < sizel; i++){
        cout << lista[i] <<" ";
    }
    cout << endl;
   
    //Bubble sort
    for(int j = 0; j < sizel; j++){ 
        for(int i = 0; i < sizel-1; i++){
            if(lista[i]>lista[i+1]){
                swap(&lista[i],&lista[i+1]);
            } 
        } 
    }

    cout << endl;
    cout << "Lista ordenada: \n";
    for(int i = 0; i < sizel; i++){
        cout << lista[i]<< " ";
    }
    cout << endl;
    return 0;
;}

void print(int arr[], int n){
    for( int i = 0; i < n; i++){
        cout << " " << arr[i];
    }
    cout << endl;
}

//Bubble sort
void bubble(int arr[], int n){
    bool swapped;
    for( int i = 0; i < n-1; i++){
        swapped = false;
        for( int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

//Selection sort
void selection(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min])
                min = j;
        }
        swap(&arr[i],&arr[min]);
        //int temp = arr[i];
        //arr[i] = arr[min];
        //arr[min] = temp;
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
