//
//  nodo.hpp
//  Punteros
//
//  Created by Angel Torres on 1/27/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef NODO_H
#define NODO_H

#include <stdio.h>

class Nodo{
private:
    int data;
    Nodo* link;
public:
    Nodo();
    ~Nodo();

    void setData(int);
    int getData();
    void setLink(Nodo*);
    Nodo* getLink();
};

#endif /* nodo_hpp */
