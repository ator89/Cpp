#include "Nodo.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>

int main(){
    Nodo* nodo = NULL;
    int num, val;

    cout << "Num: ";
    cin >> num;
    

    for(int i = 0; i < num; i++){
        cout << "Valor: " << endl;
        cin >> val;
        nodo = nodo->add(nodo,val);
    }
    nodo->imprimir(nodo);
    

    return 0;
}
