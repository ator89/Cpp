#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include <curses.h> 
#include <termios.h>

#define V 21
#define H 75

void inicio(char[V][H],int,int,int,int,int,int);
void borde(char[V][H]);
void raqjug(char[V][H],int,int);
void raqia(char[V][H],int,int);
void pel(char[V][H],int,int);
void leercamp(char[V][H]);
void gameloop(char campo[V][H],int,int,int,int,int,int,int,int,int);
void draw(char[V][H]);
void input();
void update();
void input(char campo[V][H],int *pelX,int *pelY,int *iniJug,int *finJug,int *iniIA,int *finIA,int *modX,int *modY,int* modIA,int*);
void update(char campo[V][H],int pelX, int pelY,int iniJug, int finJug, int iniIA, int finIA);
char getch();

int main(){
    int pelX, pelY, iniJug, finJug, iniIA, finIA;
    char campo[V][H];
    int modX, modY, modIA;
    //Posición
    pelX = 37;
    pelY = 10;

    iniJug = 8;
    finJug = 12;

    iniIA = 8;
    finIA = 12;
    //Modificación
    modX = -1;
    modY = -1;
    modIA = -1;
    
    inicio(campo,pelX,pelY,iniJug,finJug,iniIA,finIA);
    //leercamp(campo);
    gameloop(campo,pelX,pelY,iniJug,finJug,iniIA,finIA,modX,modY,modIA);

    return 0;
}

void inicio(char campo[V][H], int pelX, int pelY, int iniJug, int finJug, int iniIA, int finIA){
    borde(campo);
    raqjug(campo,iniJug,finJug);
    raqia(campo,iniIA,finIA);
    pel(campo,pelX,pelY);
}

void borde(char campo[V][H]){
    int i,j;

    for(i = 0; i < V; i++){
        for(j = 0; j < H; j++){
            if(i == 0 || i == V-1){
                campo[i][j] = '-';
            }else if( j == 0 || j == H-1){
                campo[i][j] = '|';
            }else{
                campo[i][j] = ' ';
            }
        }
    }
}

void raqjug(char campo[V][H], int iniJug, int finJug){
    int i, j;
    //i comienza en la primera posición de la raqueta
    for (i = iniJug; i <= finJug; i++){
        for(j = 2; j <=3; j++){
            campo[i][j] = 'X';
        }
    }
}

void raqia(char campo[V][H], int iniIA, int finIA){
    for( int i = iniIA; i <= finIA; i++){
        for(int j = H-4; j <=H-3; j++){
            campo[i][j] = 'X';
        }
    }
}

void pel(char campo[V][H], int pelX, int pelY){
    campo[pelY][pelX] = 'O';
}

void leercamp (char campo[V][H]){
    for(int i = 0; i < V; i++){
        for(int j = 0; j < H; j++){
            printf("%c",campo[i][j]);
        }
        printf("\n");
    }
}

void gameloop(char campo[V][H],int pelX, int pelY, int iniJug, int finJug,int iniIA,int finIA,int modX,int modY,int modIA){
    int gol;
    gol = 0;
    do{
        draw(campo);
        input(campo, &pelX, &pelY, &iniJug, &finJug, &iniIA, &finIA, &modX, &modY, &modIA, &gol);
        update(campo,pelX,pelY,iniJug,finJug,iniIA,finIA);
        sleep (1); 
    }while(gol == 0);    
}

void draw(char campo[V][H]){
    system("clear");
    leercamp(campo);
}

void input(char campo[V][H],int *pelX,int *pelY,int *iniJug,int *finJug,int *iniIA,int *finIA,int *modX,int *modY,int* modIA, int* gol){
    char key;

    //verificar
    if(*pelY == 1 || *pelY ==V-2){
        //invertir dirección en vertical
        *modY *= -1;
    } 

    if(*pelX == 1 || *pelX == H-2){
        *gol = 1;
    }
    
    if(*pelX == 4){
        for( int i = (*iniJug); i < (*finJug); i++){
            if (i == (*pelY)){
                //invertir dirección si choca en raqueta en horizontal
                *modX *=-1;
            }
        }
    }

    if(*pelX == H-5){
        for(int i = (*iniIA); i <= (*finIA); i++){
            *modX *= -1;
        }
    }

    if(*iniIA == 1 || *finIA == V-1){
        *modIA *= -1;
    }    

    //modificar

    //Mover únicamente si no hay anotación
    if(*gol == 0){
        //pelota
        *pelX += (*modX);
        *pelY += (*modY);

        //Raqueta COM
        *iniIA += (*modIA);
        *finIA += (*modIA);

        //Raqueta Player 1
        if( 1 == 1 ){
            key = getch();

            if( key == 'w'){
                if(*iniJug != 1){
                    //resta cuando se acerca al origen
                    *iniJug -=1;
                    *finJug -=1;
                }
            }
            if( key == 's'){
                if(*finJug != V-2){
                    *iniJug += 1;
                    *finJug += 1;
                }
            }
        }
    }
    
}

void update(char campo[V][H],int pelX, int pelY,int iniJug, int finJug, int iniIA, int finIA){
    borde(campo);
    raqjug(campo,iniJug,finJug);
    raqia(campo,iniIA,finIA);
    pel(campo,pelX,pelY);
}

char getch(){
    /*#include <unistd.h>   //_getch*/
    /*#include <termios.h>  //_getch*/
    char buf=0;
    struct termios old={0};
    fflush(stdout);
    if(tcgetattr(0, &old)<0)
        perror("tcsetattr()");
    old.c_lflag&=~ICANON;
    old.c_lflag&=~ECHO;
    old.c_cc[VMIN]=1;
    old.c_cc[VTIME]=0;
    if(tcsetattr(0, TCSANOW, &old)<0)
        perror("tcsetattr ICANON");
    if(read(0,&buf,1)<0)
        perror("read()");
    old.c_lflag|=ICANON;
    old.c_lflag|=ECHO;
    if(tcsetattr(0, TCSADRAIN, &old)<0)
        perror ("tcsetattr ~ICANON");
    printf("%c\n",buf);
    return buf;
 }
