#include <iostream>
#include "vehiculo.h"

using namespace std;

int main()
{
  Vehiculo v;
  
  v.setSerie(456);
  
  cout << v.getSerie()<<endl;
  
  system("pause");
  return 0;
}
