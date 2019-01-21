#include <stdio.h>
#define V 21
#define H 65
#define N 100

typedef struct{
    int x,y;
    int modX, modY;
    char imagen;
}snk;

typedef struct{
    int x,y;
}frt;

snk snake[N];
frt fruta;

int main{
    int tam;
    char campo[V][H];

    inicio(&tam, campo);//Iniciar elementos

    return 0;
}

void inicio(int *tam, char campo[H][V]){
    
}
