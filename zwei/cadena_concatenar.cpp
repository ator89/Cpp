#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char cad1[]="Entschuldigung Sie";
  char cad2[]=" wie wielen Autos haben Sie?";
  char cad3[30];
  
  strcpy(cad3,cad1);
  
  strcat(cad3,cad2);
  
  cout << cad3<<endl;
  
  system("pause");
  return 0;
}
