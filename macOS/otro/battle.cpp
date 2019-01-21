#include "Campo.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){

    Campo* c = new Campo();
    c->createMatrix();
    c->fillupMatrix();
    //c->printMatrix();
    c->borde();
    c->jugador();
    c->ai();
    c->ball();
    c->printMatrix();
    //c->freeupMatrix();
    return 0;
}
