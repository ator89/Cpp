#include <iostream>
using std::cout;
using std::cin;
using std::endl;

char** createMatrix(int,int);

void marco(char**,int,int);

void printMatrix(char**,int,int);
void freeMatrix(char**,int);

int main(){

	//variables iniciales de la pelota
	int pelX = 0;
	int pelY = 0;

	//variables iniciales del marco
	int altura = 15;
	int ancho = 30;

	char** matrix = NULL;
	matrix = createMatrix(altura,ancho);
	marco(matrix,altura,ancho);
	printMatrix(matrix,altura,ancho);
	
	return 0;
}





char** createMatrix(int y,int x){
	char** matrix = new char*[y];
	for(int i = 0; i < y; i++){
		matrix[i] = new char[x];
	}
	return matrix;
}

void marco(char** matrix,int altura, int ancho){
	for(int i = 0; i < altura; i++){
		for(int j = 0; j < ancho; j++){
			if(i == 0 && i < altura-1){
				matrix[i][j] = '-';
			}else if(j == 0 && j < ancho-1){
				matrix[i][j] = '|';
			}else{
				matrix[i][j] = '.';
			}
		}
	}
}

void printMatrix(char** matrix, int y, int x){
	for(int i = 0; i < y; i++){
		for(int j = 0; j < y; j++){
			cout << ' ' << matrix[i][j];
		}
		cout << endl;
	}
}

void freeMatrix(char** matrix,int y){
	for(int i = 0; i < y; i++){
		delete[] matrix[i];
		matrix[i] = NULL;
	}
	delete[] matrix;
	matrix = NULL;
}