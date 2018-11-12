#include "New.h"

#include <iostream>
using std::endl;
using std::cin;
using std::cout;

int main(){
    
    New* tab = new New();

    tab->crearTablero();
    tab->initTablero();
    tab->printTablero();
    tab->freeUp();
    
    return 0;
}
