//
//  Stack.hpp
//  Majora
//
//  Created by Angel Torres on 3/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>
#include "Node.h"

class Stack{

private:
    Node* top;
public:
    //Constructor
    Stack();
    //Destructor
    ~Stack();
    
    void push(int);
    void pop();
    void show();
};

#endif /* Stack_hpp */
