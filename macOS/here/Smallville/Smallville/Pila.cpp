//
//  Pila.cpp
//  Smallville
//
//  Created by Angel Torres on 3/11/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <iostream>
#include "Pila.h"

Pila::Pila(){
    top = 0;
}

Pila::~Pila(){
    if(top){
        delete top;
    }
}

bool Pila::isEmpty(){
    if(top == nullptr){
        return true;
    }
    return false;
}

int Pila::value(){
    if(top == 0){
        return -1;
    }
    return top->getData();
}

void Pila::push(int data){
    NodoP* temp = new NodoP();
    temp->setData(data);
    temp->setLink(top);
    top = temp;
}

void Pila::pop(){
    NodoP* temp = top;
    top = temp->getLink();
    temp->setLink(0);
    delete temp;
}

void Pila::show(){
    NodoP* temp = top;
    std::cout << "Pila: \n";
    while(temp != 0 ){
        std::cout << " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << "\n";
}
