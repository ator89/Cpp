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
    //this->persona = NULL;
    this->next = NULL;
}

void Nodo::add(Nodo** node, Persona valor){
    Nodo* temp = new Nodo();
    temp->persona = valor;
    temp->next = NULL;
    if(*node != NULL) temp->next = *node;
    *node = temp;
}

void Nodo::print(Nodo* node){
    int i = 1;
    cout << "Usuarios: " << endl;
    while(node!=nullptr){
        cout << i << " " << node ->persona.getId() << " - " <<
                            node->persona.getUsuario()<< endl;
        node = node->next;
        i++;
    }
    cout << "\n";
}

Nodo::~Nodo(){
    
}
