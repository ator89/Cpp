#include "Nodo.h"
#include <iostream>
using std::endl;
using std::cout; 

Nodo::Nodo(){
    data = 0;
    link = NULL;
}

Nodo* Nodo::add(Nodo* node, int valor){
    Nodo* temp = new Nodo();
    temp->data = valor;
    temp->link = NULL;
    if(node != NULL)
        temp->link = node;
    node = temp;
    return node;
}

void Nodo::imprimir(Nodo* node){
    
    cout << "Lista: ";
    while(node != NULL){
        cout << " " << node->data;
        node = node->link;
    }
    cout << endl;
}

Nodo::~Nodo(){
    delete link;
}
