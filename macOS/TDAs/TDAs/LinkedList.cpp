//
//  LinkedList.cpp
//  TDAs
//
//  Created by Angel Torres on 7/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(){
    head = 0;
}

LinkedList::~LinkedList(){
    if(head)
        delete head;
}

void LinkedList::insert(int data){
    Node* temp = new Node();
    temp->setData(data);
    temp->setLink(nullptr);
    if(temp != nullptr)
        temp->setLink(head);
    head = temp;
}

void LinkedList::insertAt(int data, int n){
    Node* temp1 = new Node();
    temp1->setData(data);
    temp1->setLink(nullptr);
    if(n == 1){
        temp1->setLink(head);
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(int i = 0; i < n-2; i++){
        temp2 = temp2->getLink();
    }
    temp1->setLink(temp2->getLink());
    temp2->setLink(temp1);
}

void LinkedList::remove(int n){
    Node* temp1 = head;
    if(n == 1){
        head = temp1->getLink();
        temp1->setLink(nullptr);
        delete temp1;
        return;
    }
    for(int i=0; i < n-2; i++){
        temp1 = temp1->getLink();
    }
    Node* temp2 = temp1->getLink();
    temp1->setLink(temp2->getLink());
    temp2->setLink(nullptr);
    delete temp2;
}

void LinkedList::reverse(){
    Node* next, *prev, *current;
    prev = 0;
    current = head;
    while(current != nullptr){
        next = current->getLink();
        current->setLink(prev);
        prev = current;
        current = next;
    }
    head = prev;
}

void LinkedList::print(){
    Node* temp = head;
    while(temp != nullptr){
        std::cout << " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout<< "\n";
}

//print in reverse order
void LinkedList::recur(Node* node){
    if(node == nullptr)
        return;
    //std::cout << " " << node->getData(); //put this first to reverse
    recur(node->getLink());
    std::cout << " " << node->getData();//Reverse
}

void LinkedList::print2(){
    recur(head);
    std::cout << "\n";
}
