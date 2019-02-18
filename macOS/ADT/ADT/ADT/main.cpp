//
//  main.cpp
//  ADT
//
//  Created by Angel Torres on 1/25/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "nodo.h"
#include <string>

/*

 
int main(int argc, const char * argv[]) {
    
    Nodo* nod = NULL;
    int x, t;
    std::string user, pwd;
    Persona* p = new Persona();
    
    cout << "How many people? " << endl;
    cin >> x;
    
    for (int i = 0; i < x; i++){
        cout << "Ingresar ID: ";
        cin >> t;
        cout << "Ingresar user: ";
        cin >> user;
        cout << "Ingresar pwd: ";
        cin >> pwd;
        p->setID(t);
        p->setUsuario(user);
        p->setPassword(pwd);
        nod->add(&nod, *p);
    }
    nod->print(nod);
    delete nod;
    delete p;
    
    return 0;
}
*/

struct Node{
    int data;
    struct Node* next;
};

struct Node* head; //variable global

void Insert(int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(head != NULL)
        temp->next = head;
    head = temp; //if list is empty
    
}

void Print()
{
    struct Node* temp = head;
    printf("List is: ");
    while(temp !=NULL){
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

Node* Insert2(Node* cabeza, int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(cabeza != NULL)
        temp->next = cabeza;
    cabeza = temp; //if list is empty
    return cabeza;
    
}

void Print2(Node* cabeza)
{
    //struct Node* temp = head;
    printf("List is: ");
    while(cabeza !=NULL){
        printf(" %d", cabeza->data);
        cabeza = cabeza->next;
    }
    printf("\n");
}

void Insert3(Node** cabeza, int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(*cabeza != NULL)
        temp->next = *cabeza;
    *cabeza = temp;
    
}

void Print3(Node* cabeza)
{
    //struct Node* temp = head;
    printf("List is: ");
    while(cabeza !=NULL){
        printf(" %d", cabeza->data);
        cabeza = cabeza->next;
    }
    printf("\n");
}

void InsertPos(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1){
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(int i = 0; i < n-2; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    
}
void PrintPos()
{
    Node* temp = head;
    printf("List is: ");
    while(temp !=NULL){
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    
    int a; int *p;
    a = 10;
    p = &a;
    cout << "Adress of P is " << p << endl;
    
    /*
    head = NULL; //empty list;
    
    InsertPos(2, 1);
    InsertPos(3, 2);
    InsertPos(4, 1);
    InsertPos(5, 2);
    InsertPos(9, 5);
    PrintPos();
    
    
    
    printf("How many numbers");
    int i,n,x;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        printf("Enter the number \n");
        scanf("%d",&x);
        
        Insert(x);
        Print();
        
        head = Insert2(head,x); // function asking to return address of head
        Print2(head);
        
        Insert3(&head,x); //Pass head by reference
        Print3(head);
    }
    */
    
}
