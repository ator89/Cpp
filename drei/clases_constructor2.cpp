#include <iostream>
#include "persona.h"

using namespace std;

int main()
{
  Persona p1("Erste");
  Persona p2("Zweite");
  
  cout << p1.getNombreP() << endl;
  cout << p2.getNombreP() << endl;
  
  system("pause");
  return 0;
}
