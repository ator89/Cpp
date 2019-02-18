#include "Lista.h"
#include "Nodo.h"
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

//Método para agregar al comienzo de la lista
void Lista::add(int x){
    Nodo* temp = new Nodo();
    temp->setData(x);
    temp->setLink(nullptr);
    if( head != nullptr){
        temp->setLink(head);
    }
    head = temp;
}

void Lista::Delete(int n){
    Nodo* temp1 = head;
    if(n == 1){
        head = temp1->getLink();
        //delete temp1;
        return;
    }
    for(int i = 0; i < n-2; i++){
        temp1 = temp1->getLink();
    }
    Nodo* temp2 = temp1->getLink();
    temp1->setLink(temp2->getLink());
    //delete temp2;
}


void Lista::Print(){
    Nodo* temp = head;
    while(temp != nullptr){
        std::cout << " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << std::endl;
}
