#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Vector{
    private:
        int *_ptrlems;
        int _nelems;
    public:
        Vector();
        Vector(int tam, int valor);
        ~Vector();       

        void redimensiona(int tam);
        int& elem(int i);
        int tamanyo() const;
};

Vector::~Vector(){   
    delete[] _ptrlems;
}

Vector::Vector(){
    _ptrlems = 0;
    _nelems = 0;
}

Vector::Vector(int tam, int valor = 0){
    _ptrlems = new int[tam];
    for( int i = 0; i < tam; i++){
        _ptrlems[i] = valor;
    }
    _nelems = tam;
}

void Vector::redimensiona(int tam){
    if(tam > _nelems){
        int *pant = _ptrlems;
        _ptrlems = new int[tam];
        for(int i = 0; i < _nelems; i++){
            _ptrlems[i] = pant[i];
        }
        delete[] pant;
    }
    _nelems = tam;
}

int& Vector::elem(int i){
    return _ptrlems[i];
}

int Vector::tamanyo() const{
    return _nelems;
}

int main(){
    Vector v1, v2(50), v3(30, -1);
    v1.redimensiona(10);
    cout << v1.tamanyo() << endl;
    v1.elem(3)=4;
    cout << v1.tamanyo() << endl;
    
    cout << v1.elem(3) << ' ' << v2.tamanyo() << endl;
    cout << v3.elem(0) << endl;
    cout << v2.elem(10) << endl;

    for(int i = 0; i < 1000; i++){
        Vector v4(100);
        cout << v4.elem(0) << endl;
    }
    
    cout << v1.tamanyo() << endl;    

    return 0;
}
