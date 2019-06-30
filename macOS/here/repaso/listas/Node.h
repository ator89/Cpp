#ifndef NODE_H
#define NODE_H
#include "User.h"

class Node{

    private:
        User* data;
        Node* link;
    public:
        //Constructor
        Node();
        //Destructor
        ~Node();

        //Setters
        void setData(User*);
        void setLink(Node*);

        //Getters
        User* getData();
        Node* getLink();
};

#endif
