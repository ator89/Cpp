//
//  lista.cpp
//  Pointers
//
//  Created by Angel Torres on 2/1/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "lista.h"
#include <iostream>

Lista::Lista(){
    head = nullptr;
}
Lista::~Lista(){
    if(head)
        delete head;
}

void Lista::add(int x){
    Nodo* temp = new Nodo();
    temp->setData(x);
    temp->setLink(nullptr);
    if( head != nullptr)
         temp->setLink(head);
    head = temp;
    std::cout << "agregado con éxito" << std::endl;
}

void Lista::addPos(int x,int n){
    Nodo* temp1 = new Nodo();
    temp1->setData(x);
    temp1->setLink(nullptr);
    if( n == 1 ){
        temp1->setLink(head);
        //head = temp1->getLink();
        head = temp1;
        return;
    }
    Nodo* temp2 = head;
    for( int i = 0; i < n-2; i++ )
        temp2 = temp2->getLink();
        //temp2->setLink(temp2);
    temp1->setLink(temp2->getLink());
    temp2->setLink(temp1);
}

void Lista::delPos(int n){
    Nodo* temp1 = head;
    if( n == 1){
        //temp1->setLink(head);
        head = temp1->getLink();
        delete temp1;
        return;
    }
    for( int i = 0; i < n-2; i++ )
        temp1 = temp1->getLink();
    Nodo* temp2 = temp1->getLink();
    temp1->setLink(temp2->getLink());
    //temp2->setLink(temp1);
    delete temp2;
}

void Lista::impri(){
    Nodo* temp = head;
    while ( temp != nullptr ){
        std::cout << " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << std::endl;
}
