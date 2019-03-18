#include "Arbol.h"


//Constructor
Arbol::Arbol(){
    root = 0;
}

//Destructor
Arbol::~Arbol(){
    if(root)
        delete root;
}

Nodo* Arbol::getRoot(){
    return root;
}

void Arbol::setRoot(Nodo* _nodo){
    root = _nodo;
}

//Insert
Nodo* Arbol::insert(int x){
    
    Nodo* temp = new Nodo();
    if(root == 0){
        temp->setData(x);
        temp->setLeft(0);
        temp->setRight(0);
    }
    else if( x <= temp->getData()){
        root->setLeft(insert(x));
    }
    else {
        root->setRight(insert(x));
    }
    return root;
}

//Search
void Arbol::search(int x){

}
