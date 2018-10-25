#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int** createIntMatrix(int);
void initIntMatrix(int**,int);
void printIntMatrix(int**,int);
void freeIntMatrix(int**&,int);

int main(){
    int tam = 10;
    int** matriz = createIntMatrix(tam);
    initIntMatrix(matriz, tam);
    printIntMatrix(matriz, tam);
    freeIntMatrix(matriz, tam);

    return 0;
}

int** createIntMatrix(int size){
    int** retVal = NULL;
    retVal = new int*[size];
    for( int i = 0; i < size; i++ ){
        retVal[i] = new int[size];
    }
    return retVal;
}

void initIntMatrix(int** matrix,int size){
    for(int i = 0; i < size; i++){
        for( int j = 0; j < size; j++ ){
            matrix[i][j] = 0;
        }
    }
}

void printIntMatrix(int** matrix,int size){
    for(int i = 0; i < size; i++ ){
        for( int j = 0; j < size; j++ ){
            cout << ' ' << matrix[i][j];

        }
        cout << endl;
    }
    cout << endl;
}

void freeIntMatrix(int**& matrix,int size){
    for(int i = 0; i < size; i++ ){
        delete[] matrix[i];
        matrix[i] = NULL;
    }
    delete[] matrix;
    matrix = NULL;
}
