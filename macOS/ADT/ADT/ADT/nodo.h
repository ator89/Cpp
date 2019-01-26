//
//  nodo.h
//  ADT
//
//  Created by Angel Torres on 1/26/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef nodo_h
#define nodo_h

class Nodo{
    
private:
    int data;
    Nodo* next;
public:
    Nodo();
    ~Nodo();
    
    void add(Nodo**,int);
    void print(Nodo*);
    
};

#endif /* nodo_h */
