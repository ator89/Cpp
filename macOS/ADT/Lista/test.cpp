#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct Node{
    int data;
    struct Node* link;
};

void add(Node*,int);
void addPos(Node*,int);
void Delete(Node*,int);
void Reverse(Node*,int);
void Print();


int main(){
    Node* head;

    add(head,4);

    return 0;
}

void add(Node* head, int x){
    Node* temp = new Node();
    temp->data = x;
    temp->link = NULL;
    if(head != NULL)
        temp->link = head;
    head = temp;
    //return *head;
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
    Node* temp2 = temp1->link;
    for(int i = 0; i< n-2; i++)
        temp2 = temp2->link;
    temp1->link = temp2->link;
    temp2->link = temp1;
}

void Delete(Node* head, int n){
    Node* temp1 = head;
    if(n == 1){
        head = temp1->link;
        delete temp1;
    }
    for( int i = 0; i < n-2; i++)
        temp1 = temp1->link;
    Node* temp2 = temp1->link;
    temp1->link = temp2->link;
    delete temp2;
}

void Reverse(Node* head){
    Node* current, *prev, *next;
    current = head;
    prev = NULL;
    while (current !=NULL){
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
