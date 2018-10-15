#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int mayor, menor;
  int array[5]={0,0,0,0,0};
  
  for (int i=0; i<=4;i++){
     cout << "Ingrese un numero" <<endl;
     cin >>array[i];
     
     
     if ( array[i] > mayor){
        mayor = array[i];
     }
     
     if( array[i]<menor){
        menor = array[i];
     }
  }  
  
  cout << mayor <<endl;
  cout << menor << endl;
  
  getch();
  return 0;
}
