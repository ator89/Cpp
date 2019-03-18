#include "Nodo.h"

//Constructor
Nodo::Nodo(){
    data = 0;
    left = 0;
    right = 0;
}

//Destructor
Nodo::~Nodo(){
    if(left)
        delete left;
    if(right)
        delete right;
}

//Getters
int Nodo::getData(){
    return data;
}

Nodo* Nodo::getLeft(){
    return left;
}

Nodo* Nodo::getRight(){
    return right;
}

//Setters
void Nodo::setData(int _data){
    data = _data;
}

void Nodo::setLeft(Nodo* _left){
    left = _left;
}

void Nodo::setRight(Nodo* _right){
    right = _right;
}
