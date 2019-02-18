#ifndef NODO_H
#define NODO_H

class Nodo{
    private:
        int data;
        Nodo* link;
    public:
        //Constructor
        Nodo();
        //Destructor
        ~Nodo();

        //Getters
        int getData();
        Nodo* getLink();

        //Setters
        void setData(int);
        void setLink(Nodo*);

};

#endif
