//
//  nodo.cpp
//  ADT
//
//  Created by Angel Torres on 1/26/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

#include "nodo.h"

Nodo::Nodo(){
    this->data = 0;
    this->next = NULL;
}

void Nodo::add(Nodo** node, int valor){
    Nodo* temp = new Nodo();
    temp->data = valor;
    temp->next = NULL;
    if(*node != NULL) temp->next = *node;
    *node = temp;
}

void Nodo::print(Nodo* node){
    cout << "Valor: " << endl;
    while(node!=nullptr){
        cout << " " << node ->data;
        node = node->next;
    }
}

Nodo::~Nodo(){
    
}
