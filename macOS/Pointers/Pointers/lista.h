//
//  lista.hpp
//  Pointers
//
//  Created by Angel Torres on 2/1/19.
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
    Lista();
    ~Lista();

    void add(int);
    void addPos(int,int);
    void delPos(int);
    void impri();
    
};

#endif /* lista_hpp */
