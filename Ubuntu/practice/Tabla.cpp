#include "Tabla.h"
#include <iostream>
using std::endl;
using std::cout;
#include <string>
using std::string;

Tabla::Tabla(){
    this-> matriz = NULL;
}

string** Tabla::crearTabla(){
    matriz = new string*[8];

    for(int i = 0; i < 8; i++){
        matriz[i] = new string[8];
    }
    return matriz;
}

void Tabla::llenarTabla(){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            matriz[i][j] = "__";

            if(matriz[i][j] == matriz[1][j]) matriz[i][j] = "PN";
            if(matriz[i][j] == matriz[6][j]) matriz[i][j] = "PB";
            matriz[0][0] = "TN";
            matriz[0][7] = "TN";
            matriz[0][1] = "CN";
            matriz[0][6] = "CN";
            matriz[0][2] = "AN";
            matriz[0][5] = "AN";           
            matriz[0][3] = "QN";
            matriz[0][4] = "KN";
            matriz[7][4] = "KB";
            matriz[7][3] = "QB";
            matriz[7][5] = "AB";
            matriz[7][2] = "AB";
            matriz[7][6] = "CB";
            matriz[7][1] = "CB";
            matriz[7][7] = "TB";
            matriz[7][0] = "TB";
            
           
        }
    }
}

void Tabla::mover(int x,int y,int a,int b){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            matriz[x][y] = "__";
            matriz[a][b] = "PN";
        }
    }
}

void Tabla::imprimirTabla(){
    for(int i = 0; i < 8; i++){
        for( int j = 0; j < 8; j++){
            cout << " " << matriz[i][j];
        }
        cout << endl;
    }
}

void Tabla::limpiarTabla(){
    if(matriz != NULL){
    for(int i = 0; i < 8; i++){
        delete[] matriz[i];
        matriz[i] = NULL;
    }
    delete matriz;
    matriz = NULL;
    cout << "Memoria liberada con éxito" << endl;
    }
    else{
        cout << "Nada que liberar" << endl;
    }
}
Tabla::~Tabla(){
    limpiarTabla();
}
