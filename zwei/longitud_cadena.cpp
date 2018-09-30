#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
  char palabra[] = "hola";
  int longitud=0;
  
  longitud = strlen(palabra);
  cout << "Longitud de la cadena: " << longitud<<endl;
  
  system("pause");
  return 0;
}
