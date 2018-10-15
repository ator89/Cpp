#include <iostream>
#include <conio.h>

using namespace std;

int mcd(int a, int b){
   if(b==0) return b;
   else mcd(b,a%b);
}

int main()
{
  
  int a,b;
  cout << "\t\t\tRecusividad\n";
  cout << "\n";
  cout << "MCD de dos numeros" << endl << endl;
  
  do{
     cout << "Ingrese un numero: ";
     cin >> a;
     
     if(a<0) cout << "\nIngrese un entero positivo.";
  
  }while(a<0);
  
  do{
     cout << "";
     cin >> b;
     
     if(b<0) cout << "Debe ser positivo...\n";
  }while (b<0);
  
  getch();
  return 0;
}
