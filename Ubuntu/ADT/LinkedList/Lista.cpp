#include "Lista.h"

#include <iostream>

//Constructor
Lista::Lista(){
    head = nullptr;
}

//Destructor
Lista::~Lista(){
    if(head)
        delete head;
}

//Agregar al inicio de la lista
void Lista::add(Persona p){
    Nodo* temp = new Nodo();
    temp->setData(p);
    temp->setLink(nullptr);
    if( head != nullptr)
        temp->setLink( head);
    head = temp;
}

//Agregar en posición X
void Lista::addAt(Persona p, int n){
    Nodo* temp1 = head;
    temp1->setData(p);
    temp1->setLink(nullptr);
    if( n == 1){
        temp1->setLink(head);
        head = temp1;
        return;
    }
    Nodo* temp2 = head;
    for( int i = 0; i < n-2; i++){
        temp2 = temp2->getLink();
    }
    temp1->setLink(temp2->getLink());
    //temp1->getLink() = temp2->getLink();
    temp2->setLink( temp1);
}

//Eliminar posición
void Lista::eliminar(int n){
    Nodo* temp1 = head;
    if( n == 1 ){
        head = temp1->getLink();
        delete temp1;
        return;
    }
    for( int i = 0; i < n-2; i++){
        temp1 = temp1->getLink();
    }
    Nodo *temp2 = temp1->getLink();
    temp1->setLink(temp2->getLink());
    delete temp2;
}

void Lista::revertir(){
    Nodo *current, *prev, *next;
    current = head;
    prev = nullptr;
    while ( current != nullptr){
        next = current->getLink();
        current->setLink(prev);
        prev = current;
        current = next;
    }
    head = prev;
}

//Imprimir lista
void Lista::imprimir(){
    Nodo* temp = head;
    while ( temp != nullptr ){
        std::cout << " " << temp->getData().getNombre();
        std::cout << " " << temp->getData().getApellido() << std::endl; 
        temp = temp->getLink();
    }
    std::cout << std::endl;
}
