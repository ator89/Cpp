#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista{
    private:
        Nodo* head;
    public:
        Lista();
        ~Lista();

        void add(int);
        void addAt(int,int);
        void remove(int);
        void show();
};

#endif
