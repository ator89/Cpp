#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
  float x1, y1, x2, y2, xm, ym, m,d;
  
  cout << "Distancia entre dos puntos (recta), punto medio y pendiente\n\n";
  
  cout << "X1:"; cin >> x1;
  cout << "Y1:"; cin >> y1;
  
  cout << "X2:"; cin >> x2;
  cout << "Y2:"; cin >> y2;
  
  cout << endl;
  
  d = abs(sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
  m = (y2-y1)/ (x2-x1);
  xm = (x2+x1)/2;
  ym = (y2+y1)/2;
  
  cout << "La distancia es :" << setprecision(3) << d << endl;
  cout << "PendienteL " << setprecision(3) << m << endl;
  cout << "El punto medio es: ("<<setprecision(3)<<xm<<","<<ym<<")"<<endl;
  
  getch();
  return 0;
}
