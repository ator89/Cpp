#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
  float x1, x2, y1, y2;
  float distancia;  
    
  cout << "Datos del primer punto: \n\n";
  cout << "X1: "; cin >> x1;
  cout << "Y1: "; cin >> y1;
  
  cout << "X2: "; cin >> x2;
  cout << "Y2: "; cin >> y2;
  
  distancia = sqrt( pow(x1-x2, 2.)+ pow(y1-y2,2.));
  
  cout << distancia;
  
  getch();
  return 0;
}
