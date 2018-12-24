#ifndef TABLERO_H
#define TABLERO_H

class Tablero{

    private:
        char** matriz;
        int size;
    public:
        Tablero();
        ~Tablero();

        char** createMat();
        void fillMat();
        void printMat();
        void freeMat();
};

#endif
