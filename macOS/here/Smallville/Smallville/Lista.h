//
//  Lista.h
//  Smallville
//
//  Created by Angel Torres on 3/10/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Lista_h
#define Lista_h

#include "NodoL.h"

class Lista{
private:
    NodoL* head;
public:
    Lista();
    ~Lista();
    
    void insert(int);
    void insertAt(int,int);
    void remove(int);
    void show();
};


#endif /* Lista_h */
