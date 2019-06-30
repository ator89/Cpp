#ifndef NODO_H
#define NODO_H

#include <vector>
#include "Person.h"

class Nodo{
    public:
        Nodo();
        ~Nodo();

    private:
        Nodo raiz;
        Person* persona;
        std::vector<Nodo*> lista;
};

#endif
