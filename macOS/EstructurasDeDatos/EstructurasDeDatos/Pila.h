//
//  Pila.hpp
//  EstructurasDeDatos
//
//  Created by Angel Torres on 2/15/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Pila_h
#define Pila_h

#include <stdio.h>
#include "NodoPila.h"

class Pila{
private:
    NodoPila* top;
public:
    //Constructor
    Pila();
    //Destructor
    ~Pila();
    
    //Add from stack
    void push(int);
    
    //Remove from stack
    void pop();
    
    //Print stack values
    void printS();
};

#endif /* Pila_hpp */
