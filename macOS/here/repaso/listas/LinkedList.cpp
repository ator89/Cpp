#include "LinkedList.h"
#include <iostream>
using std::cout;

LinkedList::LinkedList(){
    head = 0;
}

LinkedList::~LinkedList(){
    if(head){
        delete head;
    }
}

//Insert at the beginning of the list
void LinkedList::insert(User* data){
    Node* temp = new Node();
    temp->setData(data);
    temp->setLink(nullptr);
    if(head != nullptr)
        temp->setLink(head);
    head = temp;
}

//Print elements of the list
void LinkedList::show(){
    Node* temp = head;
    while( temp != nullptr ){
        cout << " " << temp->getData()->getUsername();
        temp = temp->getLink();
    }
}
