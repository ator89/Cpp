#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void createArray();


int main(){

    //Tamaño del arreglo
    int tam_arreglo;
    //apuntador a arreglo
    int *arr;

    cout << "Ingrese el tamaño del arreglo" << endl;
    cin >> tam_arreglo;

    //Reservar memoria para arreglo con tamaño definido por el usuario
    arr = new int[tam_arreglo];

    //Inicializar el arreglo con valor 0 en todas
    for(int i = 0; i < tam_arreglo; i++){
        arr[i] = i;
    }
    //imprimir arreglo
    for(int i = 0; i < tam_arreglo; i++){
        cout << " " << i;
    }
    cout << endl;

    //liberar espacio de arreglo y memoria reservada
    delete arr;

    return 0;
}
