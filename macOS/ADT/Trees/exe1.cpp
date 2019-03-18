#include "Arbol.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
   
    Arbol* arbol = new Arbol(); 
    arbol->insert(73);
    arbol->insert(35);
    arbol->insert(44);

    //cout << arbol->getRoot()->getData();

    return 0;
}
