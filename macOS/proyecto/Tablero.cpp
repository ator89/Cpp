#include "Tablero.h"
#include <iostream>
using std::cout;
using std::endl;

Tablero::Tablero(){
	this->matriz = NULL;
	this->size = 8;
}

void Tablero::crearMatriz(){
	
	if(matriz != NULL ){
		liberarMatriz();
	}
	matriz = new char*[size];

	for(int i = 0; i < size; i++){
		matriz[i] = new char[size];
	}
	//return matriz;
}
void Tablero::llenarMatriz(){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			matriz[i][j] = 'x';
		}
	}
}
void Tablero::printMatriz(){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			cout << " " << matriz[i][j];
		}
		cout << endl;
	}
}
void Tablero::liberarMatriz(){
	if(matriz != NULL){
		for(int i = 0; i < size; i++){
			delete[] matriz[i];
			matriz[i] = NULL;
		}
		delete[] matriz;
		matriz = NULL;
	}

}

Tablero::~Tablero(){
	liberarMatriz();
	cout << "La memoria fue liberada." << endl;
}