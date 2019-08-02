#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::~LinkedList(){
    if(head)
        delete head;
}

int LinkedList::length(){
    int c = 0;
    Node* temp = head;
    while( temp != nullptr){
        temp = temp->getLink();
        c++;
    }
    return c;
}
void LinkedList::insert(int data){
    Node* temp = new Node();
    temp->setData(data);
    temp->setLink(nullptr);
    if(temp != nullptr)
        temp->setLink(head);
    head = temp;    
}

void LinkedList::insertAt(int data, int pos){
    Node* temp = new Node();
    temp->setData(data);
    temp->setLink(nullptr);
    if(pos == 1){
        temp->setLink(head);
        head = temp;
        return;
    }
    Node* temp2 = head;
    for(int i = 0; i < pos-2; i++){
        temp2 = temp2->getLink();
    }
    temp->setLink(temp2->getLink());
    temp2->setLink(temp);
}

void LinkedList::remove(int pos){
    Node* temp1 = head;
    if(pos == 1){ 
        head = temp1->getLink();
        temp1->setLink(0);
        delete temp1;
        return;
    }
    for(int i = 0; i < pos-2; i++){
        temp1 = temp1->getLink();
    }
    Node* temp2 = temp1->getLink();
    temp1->setLink(temp2->getLink());
    temp2->setLink(0);
    delete temp2;
}

void LinkedList::display(){
    Node* temp = head;
    while(temp != nullptr){
        std::cout << " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << "\n";
}
