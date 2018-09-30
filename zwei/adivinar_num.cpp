#include <iostream>
#include <time.h>

using namespace std;

int main()
{
  int num, dato, ct=0;
  
  srand(time(NULL));
  dato = 1 + rand()%(100);
  
  do{
     cout << "Ingresar un numero: "; cin >> num;
     
     if(num>dato)
     {
        cout << "\nIngrese un numero menor\n";
     }
     if(num>dato)
     {
        cout << "\nIngrese un numero mayor";
     }
     ct++;
     
  }while(num!=dato);
  
  cout << "Numero de intentos " << ct << endl;
  cout << "N intentos " << dato << endl;
    
  system("pause");
  return 0;
}
