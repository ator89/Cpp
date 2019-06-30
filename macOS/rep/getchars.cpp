#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

#include <stdio.h>

char** createMatrix(int,int);//Crear Matriz
void initMatrix(char**,int,int,string);//Inicializar matriz
void initMatrix(char**,int,int);//Inicializar matriz
void printMatrix(char**,int,int);//Imprimir Matrix
void freeMatrix(char**&,int);//Liberar matrix
void menu();//Menú de opciones

void mover(char**,int,int);

void inicio(char**,int,int,int,int);

int main(){

	//Variables de la matriz
	char** mat = NULL;
	int size = -1;

	bool menuActivo = true;
	int opcionMenu = -1;
	char input;

	int x = 0, y = 0;//matriz
	int pelX = x/2 pelY = y/2;

	while(menuActivo){
		do{
			menu();
  			cin >> opcionMenu;
  			switch(opcionMenu){
  				case 1:{//Play
  					cout << endl << endl;
  					cin.ignore();
  					cin.clear();
	  				cout << "Ingrese una tecla y presione <enter> (0 para salir): ";

					input = cin.get();
					int asciiVal = input;
		  			cout << "You Pressed: " << input << endl << " Número ASCII: " 
		  				<< asciiVal << endl << endl;
	  			}
  				break;
  				case 2://Testing con ingreso dinámico de una cadena
  				{	
  					cin.ignore();
  					cin.clear();

  					int x = 0, y = 0;
  					int size;
  					string palabra;

  					cout << "\nDimensiones del campo de juego (min 3x3)\n ";

  					cout << "Cual es la palabra de la primera fila? \n";
  					getline(cin,palabra);


  					//cálculo del size y la copia de caracteres de string a char
  					size = palabra.length();
  					char copia[size];
  					for(int i = 0; i < palabra.length(); i++){
  						copia[i] = palabra[i];
  					}


  					cout << "Ingrese ancho X: ";
  					cin >> x;
  					cout << "Ingrese altura Y: ";
  					cin >> y;

  					mat = createMatrix(y,size);
  					initMatrix(mat,y,size,palabra);


  					printMatrix(mat,y,size);
  					freeMatrix(mat,y);

  					cout << "\nLa palabra escrita fue: \n";
  					for(int i = 0; i < palabra.length(); i++){
  						cout << copia[i];
  					}
  					cout << endl;

  				}
  				break;
  				case 3://Tablero dinámico con un punto en el centro
  				{	
  					cin.ignore();
  					cin.clear();

  					cout << "\nDimensiones del campo de juego (min 3x3)\n ";

  					cout << "Ingrese ancho X: ";
  					cin >> x;
  					cout << "Ingrese altura Y: ";
  					cin >> y;

  					mat = createMatrix(y,x);
  					initMatrix(mat,y,x);

  					
  					printMatrix(mat,y,x);
  					//freeMatrix(mat,y);

  					cout << endl;

  				}
  				break;
  				case 4:
  					mover(mat,y,x);
  				break;
  				case 0://Exit
  				break;
  				default:
  					cout << "";
  				break;
  			}

		}while(opcionMenu != 0);
		menuActivo = false;
	}
	
	return 0;
}


void mover(char** matrix, int y, int x){
	
	//Puntos medios - pelota
	int ptmY = y/2;
	int ptmX = x/2;

	int key=-1;

	int opcion = -1;
	bool menuActivo = true;

	while(menuActivo){
		do{
			cin.ignore();
  			cin.clear();
			
			cout << "(w)¡ s)! -- (a)<- (d)->\n";
			cin >> key;
			key = getchar();
			switch(key){
				case 119:{//char w = 119, arriba
					cout << "\nArriba (w)\n";}
				break;
				case 115:{
					cout << "\nAbajo (s)\n";
				}
				break;
				case 97:{
					cout << "\nIzquierda (a)\n";
				}
				break;
				case 100:{
					cout << "\nDerecha (d)\n";
						for(int i = 0; i < y; i++){
							for(int j = 0; j < x; j++){
								matrix[ptmY][ptmX] = '.';
								matrix[ptmY][ptmX+1] = '8';
							}
						}
						printMatrix(matrix,y,x);
				}
				break;
				case 112://Exit
				break;
				default:{
					cout << "No se puede mover con esa tecla. 0 para salir.\n\n";
				}
				break;
			}
		}while(key != 112);
		menuActivo = false;
	}

}

//Crear una matriz con las dimensiones requeridas
char** createMatrix(int y, int x){
	char** retval = NULL;
	retval = new char*[y];
	for(int i = 0; i < x; i++){
		retval[i] = new char[x];
	}
	return retval;
}

//Inicializar la matriz con puntos en todos los espacios
void initMatrix(char** matrix,int y, int x, string palabra){
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			if(i == 0){
				matrix[0][j] = palabra[j];
			}else{
				matrix[i][j] = '.';
			}
		}
	}
}

//Inicializar la matriz con puntos en todos los espacios
void initMatrix(char** matrix,int y, int x){
	//Pelota
	int ptmY = y/2;
	int ptmX = x/2;

	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			matrix[i][j] = '.';
			if(i == ptmY && j == ptmX){
				matrix[i][j] = '8';
			}
		}
	}
}


//Imprimir los datos de la matriz
void printMatrix(char** matrix,int y, int x){
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			cout << " " << matrix[i][j];
		}
		cout << endl;
	}
}

//Liberar memoria 
void freeMatrix(char**&matrix,int y){
	for(int i = 0; i < y; i++){
		delete[] matrix[i];
		matrix[i] = NULL;
	}
	delete [] matrix;
	matrix = NULL;
}

//Menú de opciónes
void menu(){
	cout << "\n\tMENU\n\n"
		<< "1 - Play\n"
		<< "2 - Register\n"
		<< "3 - Ver\n"
		<< "4 - Otra cosa\n"
		<< "0 - Salir\n"
		<< "Seleccionar una opción: ";
}