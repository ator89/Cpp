#include <iostream>
#include <conio.h>

using namespace std;

int mcd(int a, int b){
   if(b==0) return a;
   else return mcd(b,a%b);
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
     cout << "Ingrese segundo numero";
     cin >> b;
     
     if(b<0) cout << "Debe ser positivo...\n";
  }while (b<0);
  
  if(a>b) cout << "mcd(a,b)"<<mcd(a,b);
  else if(b>a) cout << "mcd(b,a)"<<mcd(b,a);
  
  getch();
  return 0;
}
