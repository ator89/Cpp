//
//  Stack.cpp
//  Majora
//
//  Created by Angel Torres on 3/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "Stack.h"
#include <iostream>
using std::cout;

//Constructor
Stack::Stack(){}

//Destructor
Stack::~Stack(){}

void Stack::push(int data){
    Node* temp = new Node();
    temp->setData(data);
    temp->setLink(top);
    top = temp;
}

void Stack::pop(){
    Node* temp = top;
    top=temp->getLink();
    temp->setLink(0);
    delete temp;
}

void Stack::show(){
    Node* temp = top;
    while( temp != 0 ){
        cout << " " << temp->getData();
        temp = temp->getLink();
    }
    cout << "\n";
}
