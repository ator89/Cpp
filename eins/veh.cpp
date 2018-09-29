#include <iostream>
#include "vehiculo.h"
//#include "avion.h"

using namespace std;

int main()
{
  Vehiculo v;
  //Avion av;
  
  v.setSerie(456);
  
  cout << v.getSerie()<<endl;
  
  system("pause");
  return 0;
}
