#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Nodo.h"
#include "Lista.h"
#include "Persona.h"

int main(){

    Lista* lista = new Lista();
    Persona* p = new Persona();
    p->setId(1234);
    p->setNombre("Angel");
    p->setApellido("Torres");
    
    Persona* p1 = new Persona();
    p1->setId(111);
    p1->setNombre("Otro");
    p1->setApellido("Apellido");

    lista->add(*p);
    lista->add(*p1);
    lista->imprimir();
    
    delete lista;
    delete p;
    return 0;
}
