//
//  nodo.h
//  ADT
//
//  Created by Angel Torres on 1/26/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef nodo_h
#define nodo_h
#include "persona.h"

class Nodo{
    
private:
    //int data;
    Persona persona;
    Nodo* next;
public:
    Nodo();
    ~Nodo();
    
    void add(Nodo**,Persona);
    void print(Nodo*);
    
};

#endif /* nodo_h */
