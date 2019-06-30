//
//  Node.cpp
//  Majora
//
//  Created by Angel Torres on 3/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "Node.h"

//Constructor
Node::Node(){
    data = 0;
    link = 0;
}

//Destructror
Node::~Node(){
    if(link)
        delete link;
}

//Setters
void Node::setData(int _data){
    data = _data;
}

void Node::setLink(Node* _link){
    link = _link;
}

//Getters
int Node::getData(){
    return data;
}
Node* Node::getLink(){
    return link;
}
