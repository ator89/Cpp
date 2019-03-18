//
//  NodoP.hpp
//  Smallville
//
//  Created by Angel Torres on 3/11/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef NodoP_h
#define NodoP_h

class NodoP{
private:
    int data;
    NodoP* link;
public:
    NodoP();
    ~NodoP();
    
    void setData(int);
    void setLink(NodoP*);
    
    int getData();
    NodoP* getLink();
};

#endif /* NodoP_hpp */
