#include <iostream>
using std::cout;
using std::endl;
#include "LinkedList.h"

int main(){
    LinkedList* lista = new LinkedList();
    lista->insert(3);
    lista->insert(6);
    lista->insert(8);
    lista->insert(2);
    lista->insert(77);
    lista->display();
    lista->insert(5);
    lista->insert(1);
    lista->insertAt(44,2);
    lista->insertAt(99,1);
    cout << lista->length() << endl;
    lista->display();
    lista->remove(1);
    lista->display();


    return 0;
}
