#include "Nodo.h"

//Constructor por defecto
Nodo::Nodo(){
    data = 0;
    link = 0;
}

Nodo::Nodo(Nodo* _link){
    link = _link;
}
//Destructor
Nodo::~Nodo(){
    if(link)
        delete link;
}

//Setters
void Nodo::setData(int _data){
    data = _data;
}

void Nodo::setLink(Nodo* _link){
    link = _link;
}

//Getters
int Nodo::getData(){
    return data;
}

Nodo* Nodo::getLink(){
    return link;
}
