#include <iostream>

using std::cout;
using std::endl;

class Test{
    public:
            void uno(int);
            void dos(int&);
            void tres(int*);
};

void Test::uno(int z){
    z = 0;
}

void Test::dos(int& z){
    z=2;
}

void Test::tres(int* z){
    z = 0;
}

int main(){
   
    Test t;
    int num, *ptr_num;
    num = 10;
    ptr_num = &num;

    cout << "Número: " << num << endl;
    cout << "Nñumero: " << *ptr_num << endl;
    cout << "Dirección de mem: " << &num << endl;
    cout << "Dir de mem: " << ptr_num << endl; 


    cout << "Valor de la variable num: " << num << "\n";
    
    //t.uno(num); 
    cout << "Valor de la variable num luego de enviarla por valor: " << num << endl;
    
    //num = 2;
    t.dos(num);
    cout << "Valor de la variable num luego de enviarla por referencia: " << &num << endl;

    //num = 3;    
    t.tres(&num);
    cout << "PPuntero: " << &num << endl;
    
    return 0;
}


