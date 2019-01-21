#include "Campo.h"
#include <iostream>

Campo::Campo(){
    this-> H = 11;
    this-> V = 17;
    this-> matrix = NULL;
    this-> pelX = 7;
    this->pelY = 5;
}

char** Campo::createMatrix(){
    matrix = new char*[H];

    for(int i = 0; i < V; i++){
        matrix[i] = new char[V];
    }
    return matrix;
}

void Campo::fillupMatrix(){
    for(int i = 0; i < H; i++){
        for( int j = 0; j < V; j++){
            matrix[i][j] = '*';
        }
    }
}

void Campo::jugador(){
    for(int i = H-3; i < H-1; i++){
        for(int j = V-10; j < V-8; j++){
            matrix[i][j] = '$';
        }
    }
}

void Campo::borde(){
    for(int i = 0; i < H; i++){
        for(int j = 0; j < V; j++){
            if(i == 0 || i == H-1){
                matrix[i][j] = '-';
            }
            else if ( j == 0 || j == V-1){
                matrix[i][j] = '|';
            }
            else{
                matrix[i][j] = ' ';
            }
        }
    }
}

void Campo::ai(){
    for(int i = 1; i < H-8; i++){
        for( int j = V-12; j < V-6; j++){
            matrix[i][j] = '@';
        }
    }
}

void Campo::printMatrix(){
    for( int i = 0; i < H; i++){
        for(int j = 0; j < V; j++){
            std::cout << ' ' << matrix[i][j];            
        }
        std::cout << std::endl;
    }
}

void Campo::freeupMatrix(){
    for(int i = 0; i < V; i++){
        delete[] matrix[i];
        matrix[i] = NULL;
    }
    delete[] matrix;
    matrix = NULL;
}


void Campo::ball(){
    for(int i = 0; i < V; i++){
        for(int j = 0; j < H;j++){
             matrix[pelX][pelY] = 'o' ;
        }
    }    
}

Campo::~Campo(){
    freeupMatrix();
}
