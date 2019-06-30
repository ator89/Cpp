#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <thread>
#include <chrono>

#include <stdio.h>
#include <ncurses.h>

#define V 21
#define H 75

void inicio(char[V][H], int, int, int, int,int,int);
void borde(char[V][H]);//Bordes del juego
void raqjug(char[V][H],int,int);
void raqia(char[V][H],int,int);
void pel(char[V][H],int,int);
void leercampo(char [V][H]);
void gameloop(char campo[V][H],int, int, int, int, int, int, int, int, int);
void update( char campo[V][H], int pelX, int pelY, int inijug, int finjug, int iniia, int finia);
void draw(char [V][H]);
void input(char campo[V][H],int *pelX,int *pelY,int *inijug,int*, int *iniia,int *finia, int *modX, int *modY, int *modia, int *gol);
void update();

int main(){

    int pelX, pelY, inijug, finjug, iniia, finia;//Posición
    int modX, modY, modia;//Modificación
    char campo[V][H];//Matriz

    //Variables de Posición
    pelX = 37;
    pelY = 10;

    inijug = 8;
    finjug = 12;

    iniia = 8;
    finia = 12;

    //Variables de Modificación
    modX = -1;
    modY = -1;

    modia = -1;


    inicio(campo,pelX,pelY, inijug,finjug,iniia,finia);
    //leercampo(campo);

    //Gameloop
    gameloop(campo,pelX,pelY,inijug,finjug,iniia,finia,modX,modY,modia);

    return 0;
}

void inicio(char campo[V][H], int pelX, int pelY, int inijug, int finjug, int iniia, int finia){
    borde(campo);
    raqjug(campo,inijug,finjug);
    raqia(campo, iniia, finia);
    pel(campo,pelX,pelY);
}

void borde(char campo[V][H]){
    for( int i = 0; i < V; i++){
        for( int j = 0; j < H; j++){
            if(i == 0 || i == V-1){
                campo[i][j] = '-';
            }
            else if(j == 0 || j == H-1){
                campo[i][j] = '|';
            }
            else{
                campo[i][j] = ' ';
            }
        }
    }
}

//Raqueta del jugador
void raqjug(char campo[V][H], int inijug, int finjug){
    for( int i = inijug; i <= finjug; i++){
        for( int j = 2; j <=3; j++){
            campo[i][j] = 'X';
        }
    }
}

//Raqueta de IA
void raqia(char campo[V][H], int iniia, int finia){
    for(int i = iniia; i <= finia; i++){
        for( int j = H-4; j <= H-3; j++){
            campo[i][j] = 'X';
        }
    }
}

//Colocar pelota en el centro por defecto
void pel(char campo[V][H], int pelX, int pelY){
    campo[pelY][pelX] = 'O';
}

void leercampo(char campo[V][H]){
    for(int i = 0; i < V; i++){
        for(int j = 0; j< H; j++){
            printf("%c",campo[i][j]);
        }
        cout << "\n";
    }
}

void gameloop(char campo[V][H],int pelX, int pelY, int inijug, int finjug, int iniia, int finia, int modX, int modY, int modia){
    
    int gol;
    gol = 0;
    
    do{
        draw(campo);
        input(campo, &pelX,&pelY,&inijug,&finjug,&iniia,&finia,&modX, &modY, &modia, &gol);
        update(campo,pelX,pelY,inijug,finjug,iniia,finia); 

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }while(gol == 0);
}

//Dibujar en pantalla
void draw(char campo[V][H]){
    system ("clear");
    leercampo(campo);
}

//Verficar y modificar posiciones
void input(char campo[V][H],int *pelX,int *pelY,int *inijug,int *finjug, int *iniia,int *finia, int *modX, int *modY, int *modia, int *gol){
    //Verifiicación
    char key;

    //Si la bola toca la parte superior o inferior, cambiar de dirección
    if( *pelY == 1 || *pelY == V-2){
        *modY *= -1;
    }
    
    //Verificar no hay un gol
    if( *pelX == 1 || *pelX == H-2 ){
        *gol = 1;
    }

    //Verificar posición de la raqueta para que rebote
    if( *pelX == 4 ){

        //Rango del tamaño de la raqueta
        for( int i = *inijug; i <= *finjug; i++){
            //Verificar que la posicion en Y sea igual a las Y(X de character) de la raqueta
            if( i == *pelY){
                *modX *= -1;
            }
        }
    }

    if (*pelX == H -5 ){
        for (int i = *iniia; i<= *finia; i++){
            if(i == *pelY){
                *modX *= -1;
            }
        }
    }

    if(*iniia == 1 || *finia == V-1 ){
        *modia *= -1;
    }

    //Modificación
    
    //Para para
    if(*gol == 0){

        //Pelota
        *pelX += *modX;
        *pelY += *modY;

        //Raqueta de IA
        *iniia += *modia;
        *finia += *modia;

        if( 1 == 1){
            //key = cin.get();
            key = getchar();

            if( key == 'w'){
                if(*inijug != 1){
                    *inijug -= 1;
                    *finjug -= 1;
                }
            }

            if( key == 's' ){
                if(*finjug != V-2 ){
                    *inijug += 1;
                    *finjug += 1;
                }
            }

        }
    }
}

void update( char campo[V][H], int pelX, int pelY, int inijug, int finjug, int iniia, int finia){
    borde(campo);
    raqjug(campo,inijug,finjug);
    raqia(campo, iniia, finia);
    pel(campo, pelX,pelY);
}
