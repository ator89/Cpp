//
//  Node.hpp
//  ADT
//
//  Created by Angel Torres on 1/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <stdio.h>

class Node{
public:
    int data;
    Node* link;
    
    Node();
    ~Node();
};

#endif /* Node_hpp */
