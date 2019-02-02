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
        //Agregar en posición
        void addAt(Persona, int);
        //Imprimir
        void imprimir();
        //Eliminar posición
        void eliminar(int);
        //Reverse
        void revertir(); 
};

#endif
