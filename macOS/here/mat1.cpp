#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int** crearMatrix(int**,int);
void llenarMatrix(int**,int);
void printMatrix(int**,int);
void deleteMatrix(int**,int);

int main(){

    int** matrix = NULL;    

    matrix = crearMatrix(matrix,8);
    llenarMatrix(matrix,8);
    printMatrix(matrix,8);
    return 0;
}


int** crearMatrix(int** tab, int size){
    //int** retval = NULL;
    tab = new int*[size];
    for(int i = 0; i < size; i++){
        tab[i] = new int[size];
    }
    return tab;
}

void llenarMatrix(int** tab, int size){
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            tab[i][j] = 0;
        }
    }
}

void printMatrix(int** tab, int size){
    for(int i = 0; i<size; i++){
        for(int j=0; j < size; j++){
            cout << " " << tab[i][j];
        }
        cout << endl;
    }
}
