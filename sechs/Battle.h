#ifdef BATTLE_H
#define BATTLE_H

class Battle{
    private:
        char*** cubo;
        int size;
        int x;
        int y;
        int z;
    
    public:
        Battle();
        ~Battle();

        char*** createBF(int);
        void initBF();
        void printBF();
        void freeMem();
        

};
