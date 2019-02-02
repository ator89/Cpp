//
//  Node.cpp
//  ADT
//
//  Created by Angel Torres on 1/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "Node.h"

Node::Node(){
    data = 0;
    link = NULL;
}

Node::~Node(){
    delete link;
}
