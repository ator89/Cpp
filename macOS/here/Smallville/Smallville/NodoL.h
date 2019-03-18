//
//  NodoL.h
//  Smallville
//
//  Created by Angel Torres on 3/10/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef NodoL_h
#define NodoL_h

class NodoL{
private:
    int data;
    NodoL* link;
public:
    //Constructor
    NodoL();
    //Destructor
    ~NodoL();
    
    //Getters
    NodoL* getLink();
    int getData();
    
    //Setters
    void setLink(NodoL*);
    void setData(int);
};


#endif /* NodoL_h */
