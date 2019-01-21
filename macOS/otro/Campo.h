#ifndef CAMPO_H
#define CAMPO_H

class Campo{
    private:
        int H, V, pelX, pelY, ini1, fin1, ini2, fin2;
        char** matrix;
    public:
        Campo();
        ~Campo();

        char** createMatrix();
        void fillupMatrix();
        void printMatrix();
        void freeupMatrix();
        void borde();
        void jugador();
        void ai();
        void ball();
};

#endif
