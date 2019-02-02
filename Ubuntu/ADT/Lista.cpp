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
