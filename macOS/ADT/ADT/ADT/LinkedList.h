//
//  LinkedList.hpp
//  ADT
//
//  Created by Angel Torres on 1/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>

class LinkedList{
private:
    class Node{
        int data;
        Node* next;
    };
    Node* head;
public:
    LinkedList();
    ~LinkedList();
    
    
};

#endif /* LinkedList_hpp */
