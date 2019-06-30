//
//  Queue.cpp
//  Majora
//
//  Created by Angel Torres on 3/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "Queue.h"
#include <iostream>

//Constructor
Queue::Queue(){
    front = 0;
    rear = 0;
}

//Destructor
Queue::~Queue(){
    if(rear)
        delete rear;
    if(front)
        delete front;
}

void Queue::enqueue(int data){
    Node* temp = new Node();
    temp->setData(data);
    if( front == 0 && rear == 0 ){
        front = rear = temp;
    }
    rear->setLink(temp);
    rear = temp;
}

void Queue::dequeue(){
    Node* temp = front;
    front = temp->getLink();
    temp->setLink(0);
    delete temp;
}

void Queue::show(){
    Node* temp = front;
    while( temp != 0 ){
        std::cout << " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << "\n";
}
