#include "Tabla.h"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

void loop();

int main(){
   // int x,y,a,b;
   // Tabla* t = new Tabla();
   // t->crearTabla();
  //  t->llenarTabla();
//    t->imprimirTabla();
    loop();
    return 0;
}

void loop(){
    int inc = 0;
    int x,y,a,b;
    Tabla* t = new Tabla();
    t->crearTabla();
    t->llenarTabla();
    t->imprimirTabla();

    do{
        if(inc%2 == 0){
            cout << "Seleccione un peon: " << endl;
            cin >> x;
            cin >> y;
            cout << "Seleccione una nueva posicion: " <<endl;
            cin >> a;
            cin >> b;
            t->mover(x,y,a,b);
            t->imprimirTabla();
     
        }else{
            cout << "Seleccione un peon: " << endl;
            cin >> x;
            cin >> y;
            cout << "Seleccione una nueva posicion: " <<endl;
            cin >> a;
            cin >> b;
            t->mover(x,y,a,b);
            t->imprimirTabla();
    
        }
        inc++;
    }while(inc <=4);
    delete t;
}
