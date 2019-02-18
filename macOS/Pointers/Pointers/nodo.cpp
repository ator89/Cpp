//
//  nodo.cpp
//  Pointers
//
//  Created by Angel Torres on 2/1/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "nodo.h"

Nodo::Nodo(){
    data = 0;
    link = nullptr;
}
Nodo::~Nodo(){
    if(link)
        delete link;
}

int Nodo::getData(){
    return data;
}
Nodo* Nodo::getLink(){
    return link;
}

void Nodo::setData(int _data){
    data = _data;
}
void Nodo::setLink(Nodo* _link){
    link = _link;
}
