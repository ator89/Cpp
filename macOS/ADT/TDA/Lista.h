#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista{
    private:
        Nodo* head;
    public:
        //Constructor
        Lista();
        //Destructor
        ~Lista();

        //Método para agregar al comienzo de la lista
        void add(int);

        //Método para eliminar de la lista
        void Delete(int);

        //Método para imprimir los datos de la lista
        void Print();
};

#endif
