//
//  Lista.hpp
//  EstructurasDeDatos
//
//  Created by Angel Torres on 2/15/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Lista_h
#define Lista_h

#include <stdio.h>
#include "Nodo.h"

class Lista{
private:
    Nodo* head;
public:
    //Constructor
    Lista();
    //Destructor
    ~Lista();
    
    //Add to beginning
    void add(int);
    
    //Add to pos
    void addPos(int,int);
    
    //Delete pos
    void deletePos(int);
    
    //Reverse link
    void reverse();
    
    //Print list
    void printL();
    
};
#endif /* Lista_h */
