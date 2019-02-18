//
//  NodoPila.cpp
//  EstructurasDeDatos
//
//  Created by Angel Torres on 2/15/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "NodoPila.h"

//Constructor
NodoPila::NodoPila(){
    data = 0;
    link = nullptr;
}
//Destructor
NodoPila::~NodoPila(){
    if (link)
        delete link;
}

//Getters
int NodoPila::getData(){
    return data;
}

NodoPila* NodoPila::getLink(){
    return link;
}

//Setters
void NodoPila::setData(int _data){
    data = _data;
}
void NodoPila::setLink(NodoPila* _link){
    link = _link;
}
