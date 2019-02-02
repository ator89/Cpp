#ifndef NODO_H
#define NODO_H

class Nodo{
    private:
        int dato;
        Nodo* link;
    public:
        Nodo();
        ~Nodo();

        void add(Nodo**,int);
        void print(Nodo*);

};

#endif
