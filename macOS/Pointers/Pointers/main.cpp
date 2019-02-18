//
//  main.cpp
//  Pointers
//
//  Created by Angel Torres on 1/30/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include "lista.h"
#include <iostream>
using std::cout;
using std::endl;

int main(/*int argc, const char * argv[]*/) {
    
    Lista* lista = new Lista();
    
    lista->add(5);
    lista->addPos(99, 2);
    lista->add(4);
    lista->add(77);
    lista->addPos(435, 3);

    lista->add(88);
    lista->add(66);
    lista->impri();
    lista->delPos(1);
    lista->impri();

    
    /*
    int a;
    int *p;
    a = 10;
    p = &a;
    
    cout << "Adress of P is " << p << endl;
    cout << "Value at p is " << *p << endl;
    
    int b = 20;
    *p = b;
    
    cout << "Adress of P is " << p+1 << endl;
    cout << "Value at p is " << *p << endl;
     */
    delete lista;
    
    return 0;
}
