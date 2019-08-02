#include "Node.h"

Node::Node(){
    link = 0;
    data = 0;
}

Node::~Node(){
    if(link)
        delete link;
}

void Node::setData(int data){
    this->data = data;
}

void Node::setLink(Node* link){
    this->link = link;
}

int Node::getData(){
    return data;
}

Node* Node::getLink(){
    return link;
}
