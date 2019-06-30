//
//  LinkedList.hpp
//  Majora
//
//  Created by Angel Torres on 3/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>
#include "Node.h"

class LinkedList{
    
private:
    Node* head;
public:
    //Constructor
    LinkedList();
    //Destructor
    ~LinkedList();
    
    //At at the beginning of the list
    void add(int);
    
    //Add at x position
    void addAt(int, int);
    
    //Delete from position
    void remove(int);
    
    //Print elements of the list
    void show();
};

#endif /* LinkedList_hpp */
