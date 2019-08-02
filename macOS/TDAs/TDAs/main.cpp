//
//  main.cpp
//  TDAs
//
//  Created by Angel Torres on 7/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"

int main(int argc, const char * argv[]) {
    LinkedList* lista = new LinkedList();
    
    lista->insert(5);
    lista->insert(4);
    lista->insert(8);
    lista->insert(3);
    lista->insertAt(9, 5);
    lista->print();
    lista->remove(3);
    lista->print2();
    //lista->reverse();
    //lista->print();
    
    return 0;
}
