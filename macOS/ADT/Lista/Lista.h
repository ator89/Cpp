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

        //Agregar al final
        void add(int);
        //Agregar en posición
        void addAt(Nodo*,int,int);
        //Eliminar posición
        void Delete(Nodo*, int);
        //Invertir
        void Reverse(Nodo*);

        //Imprimir
        void imprimir();
};

#endif
