#include "Lista.h"
#include <iostream>

Lista::Lista(){
    head = 0;
}

Lista::~Lista(){
    if(head)
        delete head;
}

void Lista::add(int x){
    Nodo* temp = new Nodo();
    temp->setData(x);
    temp->setLink(0);
    if( head != 0 )
        temp->setLink(head);
    head = temp;
}

void Lista::addAt(int x, int n){
    Nodo* temp1 = new Nodo();
    temp1->setData(x);
    temp1->setLink(0);
    if(n == 1){
        temp1->setLink(head);
        head = temp1;
        return;
    }
    Nodo* temp2 = head;
    for(int i = 0; i < n-2; i++){
        temp2 = temp2->getLink();
    }
    temp1->setLink(temp2->getLink());
    temp2->setLink(temp1);
}

void Lista::remove(int x){
    Nodo* temp = head;
    if( head == 0 ) return;
    if( x == 1){
        head = temp->getLink();
        ////delete temp;
        return;
    }
    for(int i = 0; i< x-2; i++){
        temp = temp->getLink();
    }
    Nodo* temp2 = temp->getLink();
    temp->setLink(temp2->getLink());
    
}

void Lista::show(){
    Nodo* temp = head;
    while ( temp != 0 ){
        std::cout<< " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << "\n";
}
