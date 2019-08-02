//
//  main.cpp
//  Majora
//
//  Created by Angel Torres on 3/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

int main(int argc, const char * argv[]) {
    LinkedList* lista = new LinkedList();
    Stack* pila = new Stack();
    Queue* cola = new Queue();
    
    cola->enqueue(5);
    cola->enqueue(762);
    cola->enqueue(63);
    cola->show();
    cola->dequeue();
    cola->show();
    
    pila->push(5);
    pila->push(4);
    pila->push(3);
    pila->show();
    pila->push(7);
    pila->show();
    pila->pop();
    pila->show();
    pila->push(44);
    pila->show();
    
    lista->add(4);
    lista->add(7);
    lista->add(2);
    lista->add(9);
    lista->show();// 9 2 7 4
    lista->addAt(6, 3);
    lista->show();// 9 2 6 7 4
    lista->remove(1);
    lista->show();// 2 6 7 4
    
    //cout << "Hello, World!\n";
    
    
    return 0;
}
