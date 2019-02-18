#include "Nodo.h"

//Constructor
Nodo::Nodo(){
    data = 0;
    link = 0;
}

//Destructor
Nodo::~Nodo(){
    if(link)
        delete link;
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
