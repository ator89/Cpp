#include "Lista.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){

    Lista* lista = new Lista();
    lista->add(4);
    lista->add(5);
    lista->add(3);
    lista->Print();
    lista->Delete(1);
    lista->Print();

    return 0;
}
