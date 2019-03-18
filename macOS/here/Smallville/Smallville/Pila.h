//
//  Pila.hpp
//  Smallville
//
//  Created by Angel Torres on 3/11/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Pila_h
#define Pila_h

#include "NodoP.h"

class Pila{
private:
    NodoP* top;
public:
    Pila();
    ~Pila();
    
    bool isEmpty();
    int value();
    void push(int);
    void pop();
    void show();
};

#endif /* Pila_h */
