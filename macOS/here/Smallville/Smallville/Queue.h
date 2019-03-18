//
//  Queue.hpp
//  Smallville
//
//  Created by Angel Torres on 3/11/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "NodoQ.h"

class Queue{
private:
    NodoQ* rear, *front;
public:
    Queue();
    ~Queue();
    
    void enqueue(int);
    void dequeue();
    void show();
};

#endif /* Queue_hpp */
