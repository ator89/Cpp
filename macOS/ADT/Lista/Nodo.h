#ifndef NODO_H
#define NODO_H

class Nodo{
    private:
        int data; // Integers
        Nodo* link;//pointer to next Node
    public:
        //Constructor
        Nodo();
        Nodo(Nodo*);
        //Destructor
        ~Nodo();
        
        //Setters
        void setData(int);
        void setLink(Nodo*);

        //Getters
        int getData();
        Nodo* getLink();
};

#endif
