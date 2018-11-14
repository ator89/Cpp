#ifndef HOBBIE_H
#define HOBBIE_H

#include <string>
using std::string;

class Hobbie{
    private:
        string hobbie;
        int horas;
    public:
        //Constructores y destructor
        Hobbie();
        Hobbie(string,int);
        ~Hobbie();

        //Mutadores y accesores
        void setHobbie(string);
        string getHobbie();

        void setHoras(int);
        int getHoras();
};


#endif
