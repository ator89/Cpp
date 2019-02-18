//
//  Nodo.hpp
//  EstructurasDeDatos
//
//  Created by Angel Torres on 2/15/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Nodo_h
#define Nodo_h

#include <stdio.h>

class Nodo{
private:
    int data;
    Nodo* link;
public:
    //Constructor
    Nodo();
    //Destructor
    ~Nodo();
    
    //Getters
    int getData();
    Nodo* getLink();
    
    //Setters
    void setData(int);
    void setLink(Nodo*);
};

#endif /* Nodo_hpp */
