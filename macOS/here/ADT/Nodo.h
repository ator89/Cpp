#ifndef NODO_H
#define NODO_H

class Nodo{
    private:
        int data;
        Nodo* link;
    public:
        Nodo();
        ~Nodo();

        int getData();
        Nodo* getLink();

        void setData(int);
        void setLink(Nodo*);
};

#endif
