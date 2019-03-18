#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void swap(int*,int*);

int main(){

    int a, b;
    a = 10;
    b = 21;
    
    cout << "Dirección de a->" << &a << endl;
    cout << "Valor de a = " << a << endl;
    cout << "Dirección de b->" << &b << endl;
    cout << "Valor de b = " << b << endl;
    swap(&a,&b);
     
    cout << "Nuevo valor de a = "<< a << endl;
    cout << "Nuevo valor de b = "<< b << endl;

}

void swap(int *a, int *b){
    cout << endl << "Función Swap" << endl << endl;
    cout << "Dirección de *a->" << a << endl;
    cout << "Valor de *a->" << *a << endl;
    cout << "Dirección de *b->" << b << endl;
   
    int temp = *a; 
    cout << "Temp = valor de a->" <<temp << endl;
//int **temp = &a;
    *a = *b;
    *b = temp;
}
