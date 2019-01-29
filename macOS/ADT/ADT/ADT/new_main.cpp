//
//  new_main.cpp
//  ADT
//
//  Created by Angel Torres on 1/27/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <iostream>

struct Node{
    int data;
    struct Node* link;
};

struct Node* head;

void addPos(int x, int n){
    //Create the new node
    Node* temp1 = new Node();
    
    //Assign values to variables in Node
    temp1->data = x;
    temp1->link = NULL;
    
    //
    if(n == 1){
        temp1->link = head;
        head = temp1;
        return;
    }
    //
    Node* temp2 = head;
    for(int i = 0; i < n-2; i++){
        temp2 = temp2->link;
    }
    temp1->link = temp2->link;
    temp2->link = temp1;
    
}

void Print();

int main(){
    
}
