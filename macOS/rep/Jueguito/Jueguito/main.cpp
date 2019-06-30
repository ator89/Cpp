//
//  main.cpp
//  Jueguito
//
//  Created by Angel Torres on 5/12/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;

void menu();

char** createMatrix(int, int);
void freeMatrix(char**, int);

void table(char**,int, int);
void ball(char**,int,int);

void move(char**,int*,int*);

void start(char**,int,int,int,int);
void gameloop(char**,int,int,int,int,int,int);
void input(char**,int,int,int*,int*,int*,int*,int*);
void update(char**,int,int,int,int);
void mygame(char**, int, int);
void printMatrix(char**, int, int);

int main(int argc, const char * argv[]) {
    
    //Posiciones originales
    int pelX = 16;
    int pelY = 8;
    int height = 16;
    int width = 32;
    //
    int modX = -1;
    int modY = -1;
    
    char** matrix = nullptr;
    matrix = createMatrix(height, width);
    start(matrix, height, width, pelX, pelY);
    gameloop(matrix,height,width,pelX,pelY,modX,modY);

    //printMatrix(matrix, height, width);

    
    freeMatrix(matrix, height);
    
    return 0;
}

void input(char** matrix,int height,int width,int *pelX,int *pelY,int *modX,int *modY, int *gol){
    char key;
    if(*pelY == 1 || *pelY == height-1){
        *gol = 1;
    }
    if(*pelX == 1 || *pelX == width-1){
        *gol = 1;
    }
    
    if(*gol == 0){
        
        if(1 == 1){
            key = getchar();
            if(key == 'w'){
                if(*pelY != 1){
                    *pelY -= *pelY;
                }
            }
            if(key == 's'){
                if(*pelY != height-1){
                    *pelY += *pelY;
                }
            }
            if(key == 'd'){
                if(*pelY != 1){
                    *pelX -= *pelX;
                }
            }
            if(key == 'a'){
                if(*pelY != 1){
                    *pelX += *pelX;
                }
            }
        }
    }
}

void gameloop(char** matrix,int height,int width,int pelX,int pelY,int modX,int modY){
    int gol = 0;
    do{
        mygame(matrix, height, width);
        input(matrix,height,width,&pelX,&pelY,&modX,&modY,&gol);
        cin.ignore();
        update(matrix, height, width, pelX, pelY);
        
    }while(gol == 0);
}

void start(char** matrix,int height,int width,int pelX,int pelY){
    table(matrix, height, width);
    ball(matrix, pelX, pelY);
}

void mygame(char** matrix, int height, int width){
    system ("clear");
    printMatrix(matrix, height, width);
}

void update(char** matrix,int height,int width,int pelX,int pelY){
    table(matrix, height, width);
    ball(matrix, pelX, pelY);
}


void ball(char** matrix, int pelX, int pelY){
    matrix[pelY][pelX] = '*';
}

void move(char** matrix, int* pelX, int* pelY){
    
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j<31; j++) {
            matrix[*pelY][*pelX+i] = '*';
        }
    }
}

void table(char** matrix, int height, int width){
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if(i == 0 || i == height-1){
                matrix[i][j] = '-';
            }else if(i == height-4){
                matrix[i][j] = '^';
            }
            else if(j == 0 || j == width-1){
                matrix[i][j] = '|';
            }else{
                matrix[i][j] = '.';
            }
        }
        cout << endl;
    }
}

char** createMatrix(int height, int width){
    char** matrix = new char*[height];
    for (int i = 0; i < width; i++){
        matrix[i] = new char[width];
    }
    return matrix;
}

void printMatrix(char** matrix, int height, int width){
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << ' ' << matrix[i][j];
        }
        cout << endl;
    }
}

void freeMatrix(char** matrix, int height){
    for(int i = 0; i < height; i++){
        delete[] matrix[i];
        matrix[i] = nullptr;
    }
    delete[] matrix;
    matrix = nullptr;
}



void menu(){
    cout << "\n\tMENU\n\n"
        << "1 - Opción 1\n"
        << "2 - Opción 2\n"
        << "3 - Opción 3\n"
        << "0 - Salir\n"
    << "Seleccione una opción: ";
}
