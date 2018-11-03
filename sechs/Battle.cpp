#include "Battle.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

Battle::Battle(){
    this->cubo=NULL;
    this->size=0;
    this->y=0;
    this->x=0;
    this->z=0;
}

char*** Battle::createBF(int){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cubo[i][j] = new char**[size];
        }
    }
    for(int i = 0; i < size; i++){
        cubo[i] = new char*[size];
    }
    cubo = new char[size];
}

void initBF(){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                cubo[i][j][k]='*';
            }
        }
    }
}

