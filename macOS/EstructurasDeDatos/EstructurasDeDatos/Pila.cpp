//
//  Pila.cpp
//  EstructurasDeDatos
//
//  Created by Angel Torres on 2/15/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "Pila.h"
#include <iostream>

//Constructor
Pila::Pila(){
    top = nullptr;
}

//Destructor
Pila::~Pila(){
    if(top)
        delete top;
}

//Add from stack
void Pila::push(int x){
    NodoPila* temp = new NodoPila();
    temp->setData(x);
    temp->setLink(top);
    top = temp;
    
}

//Remove from stack
void Pila::pop(){
    NodoPila* temp = top;
    if(top == nullptr) return;
    temp = temp->getLink();
    top = temp;
    //delete temp;
}

//Print stack values
void Pila::printS(){
    NodoPila* temp = top;
    while(temp != nullptr){
        std::cout << " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << "\n";

}
