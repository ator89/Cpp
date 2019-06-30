//
//  Node.hpp
//  Majora
//
//  Created by Angel Torres on 3/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <stdio.h>

class Node{
    
private:
    int data;
    Node* link; //Link to next node
public:
    //Constructor
    Node();
    //Destructror
    ~Node();
    
    //Setters
    void setData(int);
    void setLink(Node*);
    
    //Getters
    int getData();
    Node* getLink();
};

#endif /* Node_hpp */
