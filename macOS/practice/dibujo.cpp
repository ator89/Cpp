#include <iostream>
using std::getchar;

using std::cout;
using std::cin;
using std::endl;


char** matriz(char**,int);
void llenar(char**,int);
void imprimir(char**,int);
void liberar(char**,int);

int main(){
    
    char** matrix = NULL;
    matrix = matriz(matrix,10);
    llenar(matrix,10);
    imprimir(matrix,10);
    


    return 0;
}

char** matriz(char** mat, int size){
    mat = new char*[size];
    for(int i = 0; i < size; i++){
        mat[i] = new char[size];
    }
    return mat;
}

void llenar(char** mat, int size){
    for(int i = 0; i < size; i++ ){
        for(int j = 0; j < size; j++){
            mat[i][j] = '@';
            if(i==2){
                mat[1][j] = '2'; 
            }
        }
    }
}

void imprimir(char** mat, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << " " << mat[i][j];
        }
        cout << "\n";
    }
}
