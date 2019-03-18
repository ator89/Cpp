#include "Nodo.h"

Nodo::Nodo(){
    data = 0;
    link = 0;
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
