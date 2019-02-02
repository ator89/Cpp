//
//  nodo.cpp
//  Punteros
//
//  Created by Angel Torres on 1/27/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "nodo.h"
#include <iostream>
#include <string>

Nodo::Nodo(){
    data = 0;
    link = NULL;
}

Nodo::~Nodo(){
    delete link;
}

void Nodo::setData(int _data){
    data = _data;
}


void Nodo::setLink(Nodo* _link){
    link = _link;
}

int Nodo::getData(){
    return data;
}

Nodo* Nodo::getLink(){
    return link;
}

