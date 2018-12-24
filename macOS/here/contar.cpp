#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void pedirDatos();
int contandoVocales(char* ); 

char nombreUsuario[30];

int main(){
    pedirDatos();
    cout << "\nEl número de vocales del nombre es: " << contandoVocales(nombreUsuario) << endl;
    //getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite su nombre: ";
    cin.getline(nombreUsuario, 30, '\n');

    strupr(nombreUsuario);

}

int contandoVocales(char* nombre){
    int cont=0;
    while(*nobmre){
        switch(*nombre){
            case 'a':
                cont++;
                break;
            case 'e':
                break;
            case 'i':
                break;
            case 'o':
                break;
            case 'o':
                break;
        }
    }
    return cant;
}
