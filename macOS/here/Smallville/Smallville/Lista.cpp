//
//  Lista.cpp
//  Smallville
//
//  Created by Angel Torres on 3/10/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "NodoL.h"
#include "Lista.h"
#include <iostream>

Lista::Lista(){
    head = nullptr;
}
Lista::~Lista(){
    if(head)
        delete head;
}

void Lista::insert(int data){
    std::cout << "Dirección inicial de head->"<<head << "\n";
    NodoL* temp = new NodoL();
    std::cout << "Dirección de temp->"<<temp << "\n";
    
    temp->setData(data);
    temp->setLink(nullptr);
    
    if(head != 0){
        temp->setLink(head);
    }
    head = temp;
    std::cout << "Dirección de temp->"<<temp << "\n";
    std::cout << "Dirección de head->"<<head << "\n";
}

void Lista::insertAt(int data,int n){
    NodoL* temp = new NodoL();
    temp->setData(data);
    temp->setLink(0);
    if( n == 1 ){
        temp->setLink(head);
        head = temp;
        return;
    }
    NodoL* temp2 = head;
    for(int i= 0; i<n-2; i++){
        temp2 = temp2->getLink();
    }
    temp->setLink(temp2->getLink());
    temp2->setLink(temp);
}

void Lista::remove(int n){
    std::cout << "Dirección de a remover head->"<<head << "\n";
    NodoL* temp = head;
    std::cout << "Dirección de temp->"<<head << "\n";
    if(n == 1){
        head = temp->getLink();
        //temp->setData(0);
        temp->setLink(0);
        //head = temp;
        std::cout << "Dirección del siguiente de head->"<<head << "\n";
        std::cout << "Dirección de temp->"<<temp->getLink() << "\n";
        delete temp;
        return;
    }
    for(int i=0; i<n-2; i++){
        temp = temp->getLink();
        
    }
    std::cout << "Dirección después de recorrer head->"<<temp << "\n";
    NodoL* temp2 = temp->getLink();
    std::cout << "Dirección de temp2->"<<temp2 << "\n";
    temp->setLink(temp2->getLink());
    temp2->setLink(0);
    std::cout << "Dirección de temp->"<<temp << "\n";
    std::cout << "Dirección de head->"<<head << "\n";
    delete temp2;
}

void Lista::show(){
    NodoL* temp = head;
    std::cout << "Lista: \n";
    while(temp != nullptr){
        std::cout << " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << "\n";
}
