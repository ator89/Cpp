#include <iostream>

void loop (char c[3][3]);
void intro_primera(char c[3][3]);
void tablero(char c[3][3]);

int main()
{
  char c [3][3];
  
  loop(c);//llamar a todas las funciones fundamentales y refresca pantalla.
  
  system("pause");
  return 0;
}


void loop (char c[3][3]){
    intro_primera(c);
    tablero(c);    
}

void intro_primera(char c[3][3]){
   char aux;
   aux = '1';
   for(int i = 0; i< 3; i++){
      for (int j = 0; j < 3; j ++){
          c[i][j] = aux++;
      }        
   }     
}

void tablero(char c[3][3]){
   for(int i = 0; i<3; i++){
      for(int j=0; j<3; j++){
         //printf(" %c |",c[i][j]);
         if(j<2){
            printf(" %c |",c[i][j]);
         }else{
            printf(" %c ",c[i][j]);
         }    
      }
      if(i<2){
      printf("\n-----------\n");
      }
   }
}
