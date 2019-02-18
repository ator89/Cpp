//
//  main.cpp
//  EstructurasDeDatos
//
//  Created by Angel Torres on 2/14/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <iostream>
#include "Lista.h"
#include "Pila.h"

int main(int argc, const char * argv[]) {
    //
    
    Lista* lista = new Lista();
    Pila* pila = new Pila();
    
    std::cout << "Lista: \n";
    lista->add(5);
    //lista->add(4);
    lista->add(3);
    lista->printL();
    //lista->addPos(88,2);
    //lista->printL();
    lista->deletePos(2);
    lista->printL();
    
    std::cout << "\nPila:\n";
    pila->push(343);
    pila->push(3444);
    pila->push(88);
    pila->printS();
    pila->pop();
    pila->printS();
    
    std::cout << "\nHello, World!\n";
    
    delete pila;
    delete lista;
    return 0;
}
