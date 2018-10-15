#include <iostream>
#include <time.h>

void loop (char c[3][3]);
void intro_primera(char c[3][3]);
void tablero(char c[3][3]);
void intro_yo(char c[3][3]);
void intro_AI(char c[3][3]);

int main()
{
  char c [3][3];
  
  loop(c);//llamar a todas las funciones fundamentales y refresca pantalla.
  std::cout << std::endl;
  
  system("pause");
  return 0;
}

void loop (char c[3][3]){
    
    int i;
    i=0;
    
    intro_primera(c);
    //tablero(c);
    
    do{
       system("cls");
       tablero(c);
       if(i%2 ==0){
           intro_yo(c);
       }else{
       intro_AI(c);
       }
       
       i++;
    }while(i<=9);
}

/*
void loop (char c[3][3]){
    intro_primera(c);
    tablero(c);
    intro_yo(c);
    tablero(c);
    intro_AI(c);
    tablero(c); 
}
*/

void intro_yo(char c[3][3]){
     char aux;
     int i,j, k;
     
     do{
        do{
           printf("Colocar ficha: ");
           std::cin >> aux; 
        }while( aux < '1' || aux > '9');
     
        k=0;
     
        switch(aux){
           case '1':{
                i=0, j=0;
                if(c[i][j]== 'X' || c [i][j] == 'o'){
                   k=1;
                   std:: cout << "la casilla está ocupada.\n" << std::endl;
                }
                break;
           }
           case '2':{
                i=0, j=1;
                if(c[i][j]== 'X' || c [i][j] == 'o'){
                   k=1;
                   std:: cout << "la casilla está ocupada.\n" << std::endl;
                }
                break;
           }
           case '3':{
                i=0, j=2;
                if(c[i][j]== 'X' || c [i][j] == 'o'){
                   k=1;
                   std:: cout << "la casilla está ocupada.\n" << std::endl;
                }
                break;
           }
           case '4':{
                i=1, j=0;
                if(c[i][j]== 'X' || c [i][j] == 'o'){
                   k=1;
                   std:: cout << "la casilla está ocupada.\n" << std::endl;
                }
                break;
           }
           case '5':{
                i=1, j=1;
                if(c[i][j]== 'X' || c [i][j] == 'o'){
                   k=1;
                   std:: cout << "la casilla está ocupada.\n" << std::endl;
                }
                break;
           }
           case '6':{
                i=1, j=2;
                if(c[i][j]== 'X' || c [i][j] == 'o'){
                   k=1;
                   std:: cout << "la casilla está ocupada.\n" << std::endl;
                }
                break;
           }
           case '7':{
                i=2, j=0;
                if(c[i][j]== 'X' || c [i][j] == 'o'){
                   k=1;
                   std:: cout << "la casilla está ocupada.\n" << std::endl;
                }
                break;
           }
           case '8':{
                i=2, j=1;
                if(c[i][j]== 'X' || c [i][j] == 'o'){
                   k=1;
                   std:: cout << "la casilla está ocupada.\n" << std::endl;
                }
                break;
           }
           case '9':{
                i=2, j=2;
                if(c[i][j]== 'X' || c [i][j] == 'o'){
                   k=1;
                   std:: cout << "la casilla está ocupada.\n" << std::endl;
                }
                break;
           }
        };
     }while(k == 1);  
     c[i][j] = 'X';
}

void intro_AI(char c[3][3]){
   int i,j,k;
   char aux;
   
   srand(time(NULL));     
   
   do{
      i = rand() % 3; //numero aleatorio entre 0-2;
      j = rand() % 3;
      k=0;
      
      if(c[i][j]=='X' || c[i][j]== 'o'){
         k=1;
      }
      
   }while(k==1);
   c[i][j]='o';
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
   std::cout << std::endl;
}
