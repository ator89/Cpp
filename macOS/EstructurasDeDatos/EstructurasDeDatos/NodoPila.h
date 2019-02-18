//
//  NodoPila.hpp
//  EstructurasDeDatos
//
//  Created by Angel Torres on 2/15/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef NodoPila_h
#define NodoPila_h

#include <stdio.h>

class NodoPila{
private:
    int data;
    NodoPila* link;
public:
    //Constructor
    NodoPila();
    //Destructor
    ~NodoPila();
    
    //Getters
    int getData();
    NodoPila* getLink();
    
    //Setters
    void setData(int);
    void setLink(NodoPila*);
    
};

#endif /* NodoPila_hpp */
