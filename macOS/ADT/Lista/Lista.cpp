#include "Lista.h"
#include <iostream>

Lista::Lista(){
    head = nullptr;
    //Nodo* t = new Nodo();
    //link = t->getLink();
   //// t->setLink(link);
}

Lista::~Lista(){
    if(head)
        delete head;
}

void Lista::add( int x){
    Nodo* temp = new Nodo();
    temp->setData(x);
    temp->setLink(nullptr);
    if( head != nullptr)
        temp->setLink(head);
    head = temp;
    std::cout << "Agregado con éxito.\n"; 
}

void Lista::addAt(Nodo* head, int x, int n){

}

void Lista::Delete(Nodo* head,int n){

}

void Lista::Reverse(Nodo* head){

}

void Lista::imprimir(){
    Nodo* temp = head;
    std::cout << "List is: ";
    while( temp != NULL ){
        std::cout <<"Valor: " <<" " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << "\n";
}
