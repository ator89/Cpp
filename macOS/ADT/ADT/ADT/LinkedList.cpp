//
//  LinkedList.cpp
//  ADT
//
//  Created by Angel Torres on 1/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "LinkedList.h"
#include "Node.h"


void add(Node* head, int x){
    Node* temp = new Node();
    temp->data = x;
    temp->link = NULL;
    if(head != NULL)
        temp->link = head;
    head = temp;
}

void addPos(Node* head, int x, int n){
    Node* temp1 = new Node();
    temp1->data = x;
    temp1->link = NULL;
    
    if(n == 1){
        temp1->link = head;
        head = temp1;
        return;
    }
    
    Node* temp2 = head;
    for(int i = 0; i < n-2; i++){
        temp2 = temp2->link;
    }
    temp1->link = temp2->link;
    temp2->link = temp1;
}

void deletePos(Node* head, int n){
    Node* temp1 = head;
    
    if(n == 1){
        head = temp1->link;
        delete temp1;
        return;
    }
    
    for(int i = 0; i < n-2; i++){
        temp1 = temp1->link;
    }
    Node* temp2 = temp1->link;
    temp1->link = temp2->link;
    delete temp2;
}

void Reverse(Node* head){
    Node* current, *prev, *next;
    current = head;
    prev = NULL;
    while(current !=NULL){
        next = current->link;
        current->link= prev;
        prev = current;
        current = next;
    }
    head = prev;
}
