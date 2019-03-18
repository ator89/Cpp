#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){


    char nombre[] = "hulk";

    char x;
    int intento = 0; 
    int punto = 0;

    while(intento <=5){
        cout << "Ingresar letra: "; 
        cin >> x;
        for(int i = 0; i < (int)sizeof(nombre); i++){
            if(nombre[i] == x){
                cout << "Le diste\n";
                punto++;
                break;
            }
            else{
                cout << "Fallaste\n";
                //intento++;
                break;
            }
        }
        intento++;
        if(punto == (int)sizeof(nombre)){
            cout << "Ganaste\n";
            intento = 5;
            break;
        }

    }



    return 0;
}
