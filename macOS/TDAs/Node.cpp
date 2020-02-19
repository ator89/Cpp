#include "Node.h"
#include <iostream>
Node::Node(){
    next = 0;
    prev = 0;
    data = 0;
}

Node::~Node(){
    std::cout << "Eliminando nodos\n"; 
}

void Node::setNext(Node* next){
    this->next = next;
}

void Node::setPrev(Node* prev){
    this->prev = prev;
}

void Node::setData(int data){
    this->data = data;
}

Node* Node::getNext(){
    return next;
}

Node* Node::getPrev(){
    return prev;
}

int Node::getData(){
    return data;
}
