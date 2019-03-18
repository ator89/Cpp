//
//  NodoL.cpp
//  Smallville
//
//  Created by Angel Torres on 3/10/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "NodoL.h"

//Constructor
NodoL::NodoL(){
    data = 0;
    this->link = nullptr;
}

//Destructor
NodoL::~NodoL(){
    if(link)
        delete link;
}

//Getters
NodoL* NodoL::getLink(){
    return this->link;
}

int NodoL::getData(){
    return data;
}


//Setters
void NodoL::setLink(NodoL* _link){
    this->link = _link;
}

void NodoL::setData(int _data){
    data = _data;
}

