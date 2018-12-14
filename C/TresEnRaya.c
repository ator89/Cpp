#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void loop(char c[3][3]);
void Intro_Primera(char[3][3]);
void tablero(char[3][3]);
void Intro_Yo(char[3][3]);
void Intro_IA(char[3][3]);

int main(){
    char c[3][3];

    loop (c);

    
    return 0;
}

void loop (char c[3][3]){
    /*Intro_Primera(c);
    tablero(c);
    Intro_Yo(c);
    tablero(c);
    
    printf("Turno IA\n");
    Intro_IA(c);
    tablero(c);
    Intro_Yo(c);
    tablero(c);*/
    int i;
    i = 0;

    Intro_Primera(c);
    
    do{
        system("clear");
        tablero(c); 
        
        if (i%2 == 0){
            Intro_Yo(c);
        }else{
           
            i++; 
            Intro_IA(c);
        }
        
        i++;
    }while(i <= 9);
}

void Intro_Primera (char c[3][3]){
    int i, j;
    char aux;
    aux = '1';    

    for( i = 0; i < 3; i++){
        for( j = 0; j < 3; j++){
            c[i][j] = aux++;
        }
    }
}

void Intro_Yo(char c[3][3]){
    int i,j,k;
    char aux;

    do{
        do{
            printf("Coloca una ficha: ");
            fflush(stdin); //Antes de un scanf con una variable tipo char
            scanf("%c",&aux);
        }while(aux < '1' || aux > '9');

        k = 0;    

        switch(aux){
            case '1':{
                i = 0;
                j = 0;
                if(c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla está ocupada.\n\n");
                }
                break;
            }
            case '2':{
                i = 0;
                j = 1;
                if(c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla está ocupada.\n\n");
                }
                break;
            }
            case '3':{
                i = 0;
                j = 2;
                if(c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla está ocupada.\n\n");
                }
                break;
            }
            case '4':{
                i = 1;
                j = 0;
                if(c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla está ocupada.\n\n");
                }
                break;
            }
            case '5':{
                i = 1;
                j = 1;
                if(c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla está ocupada.\n\n");
                }
                break;
            }
            case '6':{
                i = 1;
                j = 2;
                if(c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla está ocupada.\n\n");
                }
                break;
            }
            case '7':{
                i = 2;
                j = 0;
                if(c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla está ocupada.\n\n");
                }
                break;
            }
            case '8':{
                i = 2;
                j = 1;
                if(c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla está ocupada.\n\n");
                }
                break;
            }
            case '9':{
                i = 2;
                j = 2;
                if(c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla está ocupada.\n\n");
                }
                break;
            }
            default:
                break;

        }//end switch

    }while( k == 1);//end do 1

    c[i][j] = 'X';
}

void Intro_IA(char c[3][3]){
    int i, j, k;
    srand(time(NULL));

    do{
        i = rand() % 3;
        j = rand() % 3;
       
        k = 0;
 
        if(c[i][j] == 'X' || c[i][j] == 'O'){
            k = 1;
        }
        
    }while(k == 1);
    
     c[i][j] = 'O';
}

void tablero(char c[3][3]){
    int i, j;
    
    for ( i = 0; i < 3; i++){
        for( j = 0; j < 3; j++){
            if (j < 2){
                printf(" %c |", c[i][j]);
            }else{
                printf(" %c ", c[i][j]);
            }
        }//end for j
        if(i < 2){
            printf ("\n-----------\n");
        }
    }//end for i
    printf("\n\n");
}//end tablero
