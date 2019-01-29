#ifndef NODO_H
#define NODO_H

class Nodo{
    private:
        int data;
        Nodo* link;
    public:
        Nodo();
        ~Nodo();

        Nodo* add(Nodo*,int);
        void imprimir(Nodo*);
};

#endif
