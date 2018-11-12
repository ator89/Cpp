#ifndef NEW_H
#define NEW_H

#define SIZE 8

class New{
    private:
        int x1, x2, y1, y2;
        int** tablero;

    public:
        New();
        New(int,int,int,int);
        ~New();

        void** crearTablero();
        void initTablero();
        void printTablero();
        void freeUp();      

};

#endif
