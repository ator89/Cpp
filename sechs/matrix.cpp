#include <iostream>
using std::endl;
using std::cout;

int** crearMatriz(int);
void fillMatrix(int**,int);
void printMatrix(int**,int);
void deleteMatrix(int**,int);

int main(){

    int tam = 8;
    int** matrix = NULL;
    
    matrix = crearMatriz(tam);
    fillMatrix(matrix,tam);
    printMatrix(matrix,tam);
    deleteMatrix(matrix,tam);
    
    
    return 0;
}

int** crearMatriz(int size){
    int** retVal = NULL;
    retVal = new int*[size];
    for(int i = 0; i < size; i++){
        retVal[i] = new int[size];
    }
    return retVal;
}

void fillMatrix(int** matrix, int size){
    for(int i = 0; i < size; i++ ){
        for (int j = 0; j < size; j++){
            if(i%2==0 && j%2==0){matrix[i][j]= 1;}
            if(i%2==1 && j%2==1)matrix[i][j]=0;
            //else{matrix[i][j] = 0;}
        }
    }
}

void printMatrix(int** matrix, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << ' ' << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void deleteMatrix(int** matrix, int size){
    for(int i = 0; i < size; i++){
        delete[] matrix[i];
        matrix[i] = NULL; 
    }
    delete matrix;
    matrix = NULL;
}
