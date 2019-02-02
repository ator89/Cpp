#include "Nodo.h"

//Constructor
Nodo::Nodo(){
    //data = 0;
    link = nullptr;
}

//Destructor
Nodo::~Nodo(){
    if(link)
        delete link;
}

//Setters
void Nodo::setData(Persona p){
    data = p;
}

void Nodo::setLink(Nodo* _link){
    link = _link;
}

//Getters
Persona Nodo::getData(){
    return data;
}

Nodo* Nodo::getLink(){
    return link;
}
