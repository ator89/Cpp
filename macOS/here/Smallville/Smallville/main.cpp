//
//  main.cpp
//  Smallville
//
//  Created by Angel Torres on 3/10/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Lista.h"
#include "Pila.h"
#include "Queue.h"

void swap(int*,int*);
void bubble(int*,int);
void selection(int*,int);
void show(int*,int);
void merge(int*,int*,int*);
void mergeSort(int*,int);

int main(int argc, const char * argv[]) {
    
    Lista* lista = new Lista();
    Pila* pila = new Pila();
    Queue* cola = new Queue();
    
    cout << "Dirección de lista->"<< lista << "\n";
    
    lista->insert(5);  //5
    lista->insert(99); //99 5
    lista->insert(7);  //7 99 5
    lista->insert(2);  //2 7 99 5
    //lista->insert(4);  //4 2 7 99 5
    lista->show();
    lista->insertAt(66,1);
    lista->remove(1);
    lista->insertAt(44,3);
    lista->show();
    
    cout << endl << endl;
    
    cout << pila->isEmpty() << endl;
    pila->push(6);
    pila->show();
    pila->push(5);
    pila->push(3);
    pila->push(7);
    pila->show();
    cout << pila->isEmpty() << endl;
    cout << pila->value() << endl;
    pila->pop();
    pila->show();
    pila->push(8);
    pila->show();
    pila->pop();
    pila->pop();
    pila->show();
    
    cout << endl << endl << endl;
    
    cola->enqueue(7);
    cola->enqueue(3);
    cola->enqueue(8);
    cola->show();
    cola->dequeue();
    cola->dequeue();
    cola->enqueue(5);
    cola->show();
    
    
    cout << endl << endl << endl << endl;
    
    int mat[] = {5,6,4,9,2,1,3,7};
    int size = sizeof(mat)/sizeof(mat[0]);
    
    int a = 10, b = 35;
    swap(&a, &b);
    cout << a << " " << b << endl;
    
    //bubble(mat,size);
    //selection(mat,size);
    mergeSort(mat, size);
    show(mat, size);
    
    return 0;
}


void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void show(int* mat, int size){
    for(int i = 0; i < size; i++){
        cout << " " << mat[i];
    }
    cout << endl;
}

void bubble(int* mat, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-1; j++){
            if(mat[j]>mat[j+1])
                swap(&mat[j],&mat[j+1]);
        }
    }
    
}

void selection(int* mat, int size){
    for(int i = 0; i < size-1; i++){
        int min = i;
        for(int j = i+1; j < size; j++ ){
            if(mat[j]<mat[min]){
                min = j;
            }
        }
        swap(&mat[i],&mat[min]);
    }
}




void mergeSort(int* arr, int size){
    //int n = sizeof(arr)/sizeof(arr[0]);
    
    if(size < 2 )
        return;
    
    int mid = size/2;
    cout << "valor de mid: " << mid << endl;
    int l= mid;
    int r = size-mid;
    
    int left[l];
    int right[r];
    
    for(int i=0; i < mid-1; i++){
        left[i] = arr[i];
    }
    for(int i=mid; i< size-1; i++){
        right[i-mid] = arr[i];
    }
    mergeSort(left, l);
    mergeSort(right, r);
    merge(left, right, arr);
    
}

void merge(int *left, int *right, int *arr){
    
    int nL = sizeof(left)/sizeof(int);
    int nR = sizeof(right)/sizeof(int);
    int i,j,k;
    i = j = k = 0;
    
    while ( i < nL && j < nR){
        
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i = i+1;
        }
        else{
            arr[k] = right[j];
            j = j+1;
        }
        k = k+1;
    }
    while(i < nL){
        arr[k] = left[i];
        i++;
        k++;
    }
    while( j < nR){
        arr[k] = right[j];
        j++;
        k++;
    }
}


