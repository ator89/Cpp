#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Lista.h"

int main(){
    Lista* lista = new Lista();
    lista->add(4);
    lista->add(8);
    lista->add(5);
    lista->add(32);
    lista->show();
    lista->remove(1);
    lista->show();

    return 0;
}
