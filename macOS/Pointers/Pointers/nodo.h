//
//  nodo.hpp
//  Pointers
//
//  Created by Angel Torres on 2/1/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef nodo_h
#define nodo_h


class Nodo{
private:
    int data;
    Nodo* link;
public:
    Nodo();
    ~Nodo();
    
    int getData();
    Nodo* getLink();
    
    void setData(int);
    void setLink(Nodo*);
};

#endif /* nodo_hpp */
