//
//  lista.hpp
//  Punteros
//
//  Created by Angel Torres on 1/27/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef lista_h
#define lista_h


#include <stdio.h>
#include "nodo.h"

class Lista{
private:
    Nodo* head;
public:
    void add(Nodo*, int);
    void print();
    
    Nodo* operator = (Nodo* un,Nodo* dos){
        un->data = dos->data;
        un->link = dos->link;
        return un;
    }
}

#endif /* lista_hpp */
