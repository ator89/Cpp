//
//  NodoQ.hpp
//  Smallville
//
//  Created by Angel Torres on 3/11/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef NodoQ_h
#define NodoQ_h

class NodoQ{
private:
    int data;
    NodoQ* link;
public:
    NodoQ();
    ~NodoQ();
    
    void setData(int);
    void setLink(NodoQ*);
    
    int getData();
    NodoQ* getLink();
};

#endif /* NodoQ_hpp */
