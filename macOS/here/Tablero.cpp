#include "Tablero.h"
#include <iostream>

Tablero::Tablero(){
    size = 8;
    matriz = NULL;
}

char** Tablero::createMat(){
    matriz = new char*[size];
    for(int i = 0; i < size; i++){
        matriz[i] = new char[size];
    }
    return matriz;
}

void Tablero::fillMat(){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            matriz[i][j] = 'x';
        }
        for(int k = 0; k < i; k++){
          matriz[i][k] = 'c';
        }

        for(int l = 0; l < 8; l++){
            matriz[i][l] = 't';
        }
    }
}

void Tablero::printMat(){
    for(int i = 0; i < size; i++){
        for( int j = 0; j < size; j++){
            std::cout << ' ' << matriz[i][j];
        }
        std::cout << std::endl;
    }
}

void Tablero::freeMat(){
    for(int i = 0; i < size; i++){
        delete[] matriz[i];
        matriz[i] = NULL;
    }
    delete[] matriz;
    matriz = NULL;
}

Tablero::~Tablero(){
    freeMat();
}
