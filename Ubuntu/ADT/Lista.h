#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include "Persona.h"

class Lista{
    private:
        Nodo* head;
    public:
        //Constructor
        Lista();
        //Destructor
        ~Lista();
        
        //Agregar al inicio
        void add(Persona);
        //Imprimir
        void imprimir();
};

#endif
