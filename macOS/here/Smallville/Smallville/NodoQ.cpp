//
//  NodoQ.cpp
//  Smallville
//
//  Created by Angel Torres on 3/11/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "NodoQ.h"

NodoQ::NodoQ(){
    data = 0;
    link = 0;
}

NodoQ::~NodoQ(){
    if(link)
        delete link;
}

void NodoQ::setData(int _data){
    data = _data;
}

void NodoQ::setLink(NodoQ* _link){
    link = _link;
}

int NodoQ::getData(){
    return data;
}

NodoQ* NodoQ::getLink(){
    return link;
}
