#include <iostream>
using std::cout;
using std::endl;

#define V 21
#define H 75

void inicio(char [V][H], int, int, int, int, int,int);
void borde(char campo[V][H]);
void raqjug(char[V][H], int, int);
void raqia(char[V][H], int, int);
void pel(char [V][H], int, int);

int main(){
   int pelX, pelY;//posición de la pelota
   int inijug, finjug; //donde comienza y termina la raqueta 
   int inia, finia;
   char campo[V][H];
   
   pelX = 37;
   pelY = 10;
   
   inijug = 8;
   finjug = 12;

   inia = 8;
   finia = 12;

   inicio(campo, pelX, pelY, inijug, finjug, inia, finia);
   
   return 0;
}


void inicio(char campo[H][V], int pelX, int pelY, int inijug, int finjug, int iniia, int finia){
   borde(campo);
   raqjug(campo, inijug, finjug);
   raqia(campo, iniia, finia);
   pel(campo, pelX, pelY);
}

void borde(char campo[V][H]){
   int i, j;

   for( i = 0; i < V; i++){
      for (j = 0; j < H; j++){
         if( i == 0 || i == V-1){
	    campo[i][j] = '-';
	 }else if (j == 0 || j == H-1){
	    campo[i][j] = '|';
	 }else{
	    campo[i][j] = ' ';
	 }
      }
   }
}


void raqjug(char campo[V][H], int inijug, int finjug){
   int i, j;
   
   for(i = inijug; i < finjug; i++){
      for( j = 2; j <=3; j++){
         campo[i][j] = 'X';
      }
   }

}

void raqia(char campo[V][H], int iniia, int finia){
   int i,j;

   for( i = iniia; i < finia; i++){
      for ( j = H-4; j <= H-3; j++){
         campo[i][j] = 'X';
      }
   }
}

void pel(char campo[V][H], int pelX, int pelY){
  campo[pelX][pelY] = '0';
}
