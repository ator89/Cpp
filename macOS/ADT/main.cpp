#include "Nodo.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){

    Nodo* nod = NULL;
    int x,y;
    cout << "Cantidad de valores: ";
    cin >> x;
    for(int i= 0; i < x; i++){
        cout << "Ingrese valor: ";
        cin >> y;
        nod->add(&nod,y);
        nod->print(nod);
    }
    return 0;
}
