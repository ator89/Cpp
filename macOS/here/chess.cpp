#include "Tablero.h"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main(){
    Tablero* t;
    t->createMat();
    t->fillMat();
    t->printMat();
    t->freeMat();

    return 0;
}
