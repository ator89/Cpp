//
//  LinkedList.cpp
//  Majora
//
//  Created by Angel Torres on 3/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "LinkedList.h"
#include <iostream>

//Constructor
LinkedList::LinkedList(){
    head = 0;
}
//Destructor
LinkedList::~LinkedList(){
    if(head)
        delete head;
}

//At at the beginning of the list
void LinkedList::add(int data){
    Node* temp = new Node();
    temp->setData(data);
    temp->setLink(nullptr);
    if( head != 0)
        temp->setLink(head);
    head = temp;
}

//Add at x position
void LinkedList::addAt(int data, int n){
    Node* temp1 = new Node();
    temp1->setData(data);
    temp1->setLink(0);
    if( n == 1 ){
        temp1->setLink(head);
        head = temp1;
        return;
    }
    //Traverse nodes
    Node* temp2 = head;
    for( int i = 0; i < n - 2; i++ ){
        temp2 = temp2->getLink();
    }
    temp1->setLink(temp2->getLink());
    temp2->setLink(temp1);

}

//Delete from the beginning of the list
void LinkedList::remove(int x){
    Node* temp1 = head;
    if( head == 0 )
        return;
    if( x == 1 ){
        head = temp1->getLink();
        temp1->setLink(nullptr);
        delete temp1;
    }
    //Traverse nodes
    for( int i = 0; i < x - 2; i++ )
        temp1 = temp1->getLink();
    Node* temp2 = temp1->getLink();
    temp1->setLink(temp2->getLink());
    temp2->setLink(0);//Break link
    delete temp2;
}

//Print elements of the list
void LinkedList::show(){
    Node* temp = head;
    while( temp != 0 ){
        std::cout << " " << temp->getData();
        temp = temp->getLink();
    }
    std::cout << "\n";
}
