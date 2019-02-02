#include <iostream>
using std::endl;
using std::cin;
using std::cout;

class Vector{
    private:
        int *ptrvec;
        int nElementos;
    public:
        Vector();
        Vector(int,int);
        ~Vector();

        void resize(int);
        int& elem(int);
        int tam() const;

};

int& Vector::elem(int i){
    return ptrvec[i];
}

int Vector::tam() const{
    return nElementos;
}

void Vector::resize(int tam){
    if(tam > nElementos){
        int *ptrant = ptrvec;
        ptrvec = new int[tam];
        for(int i = 0; i < nElementos; i++){
            ptrvec[i] = ptrant[i];
        }
        delete[] ptrant;
    }
    nElementos = tam;
}

Vector::Vector(int tam, int valor = 0){
    ptrvec = new int[tam];
    for( int i = 0; i < tam; i++){
        ptrvec[i] = valor;
    }
    nElementos = tam;
}

Vector::Vector(){
    ptrvec = 0;
    nElementos = 0;
}

Vector::~Vector(){
    delete[] ptrvec;
}

int main(){

    Vector v1;
    v1.resize(10);

    cout << v1.tam() << endl;
    return 0;
}
