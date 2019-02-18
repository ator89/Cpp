//
//  Nodo.cpp
//  EstructurasDeDatos
//
//  Created by Angel Torres on 2/15/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "Nodo.h"

#include <iostream>

//Constructor
Nodo::Nodo(){
    data = 0;
    link = nullptr;
}

//Destructor
Nodo::~Nodo(){
    if(link)
        delete link;
    std::cout << "Borrando link...\n";
}

//Getters
int Nodo::getData(){
    return data;
}

Nodo* Nodo::getLink(){
    return link;
}

//Setters
void Nodo::setData(int _data){
    data = _data;
}

void Nodo::setLink(Nodo* _link){
    link = _link;
}
