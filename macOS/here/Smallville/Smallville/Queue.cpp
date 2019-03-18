//
//  Queue.cpp
//  Smallville
//
//  Created by Angel Torres on 3/11/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "Queue.h"
#include <iostream>

Queue::Queue(){
    front = 0;
    rear = 0;
}

Queue::~Queue(){
    if(front)
        delete front;
    if(rear)
        delete rear;
}

void Queue::enqueue(int data){
    NodoQ* temp = new NodoQ();
    temp->setData(data);
    temp->setLink(0);
    if( rear == 0 && front == 0 ){
        rear = front = temp;
        return;
    }
    rear->setLink(temp);
    rear = temp;
}

void Queue::dequeue(){
    NodoQ* temp = front;
    if(front == 0 && rear == 0) return;
    front = temp->getLink();
    temp->setLink(0);
    delete temp;
}

void Queue::show(){
    NodoQ* temp = front;
    std::cout<< "Queue: \n";
    while(temp != 0){
        std::cout << " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << "\n";
}
