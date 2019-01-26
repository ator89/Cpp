//
//  main.cpp
//  ADT
//
//  Created by Angel Torres on 1/25/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "nodo.h"

int main(int argc, const char * argv[]) {
    
    Nodo* nod = NULL;
    int x, t;
    
    cout << "How many numbers? " << endl;
    cin >> x;
    
    for (int i = 0; i < x; i++){
        cout << "Ingresar valor: ";
        cin >> t;
        nod->add(&nod, t);
        
    }
    nod->print(nod);
    delete nod;
    
    return 0;
}
