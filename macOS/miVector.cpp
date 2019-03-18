#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Vector{
    private:
        int *ptrEl;
        int nEl;
    public:
        Vector();
        Vector(int tam);

        void redim(int tam);
        int& elm(int i);
        int size() const;
};

Vector::Vector(){
    ptrEl = 0;
    nEl = 0;
}

Vector::Vector(int tam){
    ptrEl = new int[tam];
    nEl = tam;
}

void Vector::redim(int tam){
   if(tam > nEl){
        int *ptrnEl = ptrEl; //Guardar dirección 
        ptrEl = new int[tam]; //Asignar nuevo tamaño
        for( int i = 0; i < nEl; i++ ){
            ptrEl[i] = ptrnEl[i]; //Copiar los elementos de la dirección guardada.
        }
        delete[] ptrnEl; //Liberar el puntero temporal
   }
   nEl = tam; 
}

int& Vector::elm(int i){
    return ptrEl[i];
}

int Vector::size() const{
    return nEl;
 }

int main(){
    Vector v1, v2(50);
    v1.redim(10);
    v1.elm(3) = 4;
    cout << v1.elm(3) << ' ' << v2.size() << endl;

    return 0;
}
