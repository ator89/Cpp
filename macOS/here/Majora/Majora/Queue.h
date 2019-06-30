//
//  Queue.hpp
//  Majora
//
//  Created by Angel Torres on 3/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include <stdio.h>
#include "Node.h"

class Queue{
    
private:
    Node* rear, *front;
public:
    //Constructor
    Queue();
    //Destructor
    ~Queue();
    
    void enqueue(int);
    void dequeue();
    void show();
    
};

#endif /* Queue_hpp */
