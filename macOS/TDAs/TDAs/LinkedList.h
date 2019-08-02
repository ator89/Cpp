//
//  LinkedList.h
//  TDAs
//
//  Created by Angel Torres on 7/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h
#import "Node.h"

class LinkedList{
private:
    Node* head;
public:
    LinkedList();
    ~LinkedList();
    
    void insert(int);
    void insertAt(int,int);
    void remove(int);
    void reverse();
    void print();
    void recur(Node*);
    void print2();
};

#endif /* LinkedList_h */
