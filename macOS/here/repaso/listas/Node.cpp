#include "Node.h"

//Constructor
Node::Node(){
    link = 0;
    data = 0;
}

//Destructor
Node::~Node(){
    if(link)
        delete link;
    if(data)
        delete data;
}

//Setters
void Node::setData(User* _user){
    data = _user;
}

void Node::setLink(Node* _link){
    link = _link;
}

//Getters
User* Node::getData(){
    return data;
}

Node* Node::getLink(){
    return link;
}


