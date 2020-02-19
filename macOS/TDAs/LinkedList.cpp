#include "LinkedList.h"

#include <iostream>

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::~LinkedList(){
    
    //if(head)
    //    delete head;
    //Node* temp = head;
    std::cout << "\n\tHEAD: "<< head << "\n";
    while(head!=0){
        Node* next = head->getNext();
        std::cout << next << "\n";
        //temp = temp->getNext();
        //std::cout << next << "\n";
        delete head;
        head = next;
        std::cout << head << "\n";
    }
    delete head; 
}

void LinkedList::insert(int data){
    Node* temp = new Node();
    temp->setData(data);
    temp->setPrev(nullptr);
    temp->setNext(nullptr);
    if(head != 0){
        head->setPrev(temp);
        temp->setNext(head);
    }
    head = temp;
    std::cout << temp << std::endl << std::endl;
}

void LinkedList::insertAt(int data, int pos){

}

void LinkedList::print(){
    Node* temp = head;
    while(temp != nullptr){
        std::cout << ' ' << temp->getData() << std::endl;
        std::cout << temp;
        temp = temp->getNext();
    }
    std::cout << "\n";
}
