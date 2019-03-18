//
//  NodoP.cpp
//  Smallville
//
//  Created by Angel Torres on 3/11/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "NodoP.h"

NodoP::NodoP(){
    data = 0;
    link = 0;
}

NodoP::~NodoP(){
    if(link)
        delete link;
}

void NodoP::setData(int _data){
    data = _data;
}

void NodoP::setLink(NodoP* _link){
    link = _link;
}

int NodoP::getData(){
    return data;
}

NodoP* NodoP::getLink(){
    return link;
}
