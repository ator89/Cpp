#ifndef NODO_H
#define NODO_H

class Nodo{

    private:
        int data;
        Nodo* left, *right;
    public:
        //Constructor
        Nodo();
        //Destructor
        ~Nodo();

        //Getters
        int getData();
        Nodo* getLeft();
        Nodo* getRight();

        //Setters
        void setData(int);
        void setLeft(Nodo*);
        void setRight(Nodo*);
};

#endif
