//
//  Node.cpp
//  TDAs
//
//  Created by Angel Torres on 7/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "Node.h"

Node::Node(){
    link = nullptr;
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
