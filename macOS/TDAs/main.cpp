#include "Node.h"
#include "LinkedList.h"

#include <iostream>

int main(){

    LinkedList* lista = new LinkedList();

    lista->insert(1);
    lista->insert(2);
    lista->insert(5);
    lista->insert(4);
    lista->print();

    delete lista;

    return 0;
}
