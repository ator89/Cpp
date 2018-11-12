#include "New.h"

#include <iostream>
using std::cout;
using std::endl;

New::New(){
    this->x1 = 0;
    this->y2 = 0;
    this->x2 = 0;
    this->y1 = 0;
    this->tablero = NULL;
}

New::New(int x1, int x2, int y1, int y2){
    this-> x1 = x1;
    this-> x2 = x2;
    this-> y1 = y1;
    this-> y2 = y2;
}

void New::printTablero(){
    for( int i = 0; i < SIZE; i++ ){
        for( int j = 0; j < SIZE; j++){
            cout << tablero[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void New::initTablero(){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            tablero[i][j] = 1 - (i+j)%2;            
        }
    }
}

void** New::crearTablero(){
    tablero = new int*[SIZE];

    for( int i = 0; i < SIZE; i++ ){
        tablero[i] = new int[SIZE];
    }
}

New::~New(){
    //if(tablero !=NULL){
    freeUp();
    //};
}

void New::freeUp(){
    for(int i = 0; i < SIZE; i++){
        delete[] tablero[i];
        tablero[i] = NULL;
    }
    delete[] tablero;
    tablero = NULL;
}

