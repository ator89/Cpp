#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList();
        ~LinkedList();

        void insert(int);
        int length();
        void insertAt(int,int);
        void remove(int);
        void display();
};

#endif
