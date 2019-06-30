#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "User.h"
#include "Node.h"
class LinkedList{

    private:
        Node* head;
    public:
        //Constructor
        LinkedList();
        //Destructor
        ~LinkedList();

        void insert(User*);

        void show();
};

#endif
