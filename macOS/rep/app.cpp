#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <ncurses.h>
//#define getch() wgetch(stdsrc)

//Menú de opciones
void menu();
char** createMatrix(int);
void initMatrix(char**,int);
void printMatrix(char**,int);
void freeMatrix(char**&,int);

char** mover(char**, int);

int main(){

    bool menuActivo = true;
    int opcionMenu = -1;

    char** matriz = NULL;
    int size = 0;

    while(menuActivo){
    
        do{
            menu();
            cin >> opcionMenu;
            switch(opcionMenu){
                case 1:{
                        cout << "Ingrese el tamaño de la matriz qdrada: ";
                        cin >> size;

                        matriz = createMatrix(size);
                        initMatrix(matriz,size);
                        
                        printMatrix(mover(matriz,size),size);
                        //printMatrix(matriz,size);
                        //freeMatrix(matriz,size);
                       }
                    break;
                case 2://Registro
                    break;
                case 3://test
                    break;
                case 0://Salir
                    break;
                default://Opción incorrecta
                    cout << "Ingrese una opción válida.\n\n";
                    break;
            }
        }while(opcionMenu != 0);
        menuActivo = false;
    }

    return 0;
}

char** mover(char** matriz, int size){
    //printMatrix(matriz,size);
    char input;
    int asciiVal;

    //cout << "Mueva el cursor (W - arriba,S - abajo,A - izquierda,D - derecha) ";
    //cin >> input;
    //cin.ignore();

    while(1){
        input = cin.get();

        if(asciiVal == 27)
            break;

        cout << "Key pressed -> " << input << " asciiVal -> " << asciiVal << endl;

    }


    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
           //matriz[i][j] = '@'; 
                switch (input){
        case 'w':
            i--;
             //matriz[i-1][j] = '#';
        break;
        case 's':
            i++;
             //matriz[i+1][j] = '#';
        break;
        case 'a':
            j--;
              //matriz[i][j-1] = '#';
        break;
        case 'd':
            j++;
              //matriz[i][j+1] = '#';
        break;
        default:
          cout << "Tecla no válida.\n\n";
        break;
    }
    matriz[i][j] = '@';
        }
    }
    return matriz;

}


//Crear la matriz
char** createMatrix(int size){
    char** matriz = new char*[size];
    for(int i = 0; i < size; i++){
        matriz[i] = new char[size];
    }
    return matriz;
}


//Inicializar la matriz
void initMatrix(char** matrix, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            matrix[i][j] = '.';
            if(i == 3 && j == 2){
                matrix[i][j] = 'x';}
            if(j > 3 && i > 2)
                matrix[i][j] = 'o';
            

        }
    }
}


//Imprimir
void printMatrix(char** matrix, int size){
    for(int i = 0; i < size; i++){
        for( int j = 0; j < size; j++){
            cout << ' ' << matrix[i][j];
        }
        cout << endl;
    }
}


//Liberar memoria
void freeMatrix(char**& matrix, int size){
    for(int i = 0; i < size; i++){
        delete[] matrix[i];
        matrix[i] = NULL;
    }
    delete[] matrix;
    matrix = NULL;
}


//Menú de opciones
void menu(){
    cout << "\n\tMENU\n\n"
        << "1 - Jugar\n"
        << "2 - Registrar\n"
        << "0 - Salir\n"
        << "Seleccionar opción: ";
}
