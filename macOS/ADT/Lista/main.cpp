#include "Lista.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){

    Lista* lista =  new Lista();
    //Nodo* head;
    
    lista->add(4);
    lista->add(6);
    lista->imprimir();
    /*
    int entrada;
    entrada = 4;
    //int* ptrT = &entrada;
    cout << &lista << endl;
    
    //cout << &head<< endl;
    //lista->add(5);
    //lista->imprimir();
    
    cout << &head;*/
    delete lista;
    return 0;
}
