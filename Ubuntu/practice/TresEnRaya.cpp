#include <iostream>
using std::endl;
using std::cout;

void introPrimera(char[3][3]);
void introYo(char[3][3]);
void tablero(char[3][3]);
void loop(char[3][3]);


int main(){

    char c[3][3];
    loop(c);
    return 0;
}

void loop(char c[3][3]){
    introPrimera(c);
    tablero(c);
}

void introPrimera(char c[3][3]){
    char aux;
    aux = '1';
    for(int i = 0; i < 3; i++){
        for( int j = 0; j < 3; j++){
            c[i][j] = aux++;
        }
    }
}

void introYo(char c[3][3]){

}

void tablero(char c[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j<2) cout << " " << c[i][j] << " |";
            else cout << " " << c[i][j];
        }
        if(i < 2){
            cout << endl << "-----------" << endl;
        }
    }
    cout << endl << endl;
}
