//
//  Lista.cpp
//  EstructurasDeDatos
//
//  Created by Angel Torres on 2/15/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

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
    std::cout << "Borrando nodo.\n";
}

//Add to beginning
void Lista::add(int x){
    Nodo* temp = new Nodo();
    temp->setData(x);
    temp->setLink(nullptr);
    if( head != nullptr ){
        temp->setLink(head);
    }
    head = temp;
}

//Add to pos
void Lista::addPos(int x,int n){
    Nodo* temp1 = new Nodo();
    temp1->setData(x);
    temp1->setLink(nullptr);
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

//Delete pos
void Lista::deletePos(int n){
    Nodo* temp1 = head;
    if(n==1){
        head = temp1->getLink();
        std::cout << "Nodo eliminado.\n";
        //delete temp1;
        return;
    }
    for(int i = 0; i < n-2; i++){
        temp1 = temp1->getLink();
    }
    Nodo* temp2 = temp1->getLink();
    temp1->setLink(temp2->getLink());
    //delete temp1;
    std::cout << "Nodo eliminado.\n";
}

//Reverse link
void Lista::reverse(){
    
}

//Print list
void Lista::printL(){
    Nodo* temp = head;
    while( temp != nullptr ){
        std::cout << " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << "\n";
}
