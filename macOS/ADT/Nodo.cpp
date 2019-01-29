#include "Nodo.h"
#include <iostream>

Nodo::Nodo(){
    dato = 0;
    link = nullptr;
}

void Nodo::add(Nodo** node, int valor){
    Nodo* temp = new Nodo();
    temp->dato = valor;
    temp->link = nullptr;
    if(*node != NULL)
        temp->link = *node;
    *node = temp;
}

void Nodo::print(Nodo* node){
    std::cout << "Lista: ";
    while(node != NULL){
        std::cout << " " << node->dato;
        node = node->link;
    }
    std::cout << "\n";
}

Nodo::~Nodo(){
    
}
