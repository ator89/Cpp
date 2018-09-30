#include <iostream>

using namespace std;

int main()
{
  int n[100][100], fila, col;
  
  cout << "N Filas: ";cin>>fila;
  cout << "N Columnas: ";cin >>col;
  
  for(int i=0;i<fila;i++)
  {
     for(int j=0;j<col;j++)
     {
        cout << "Digite un num ["<<i<<"]["<<j<<"]";
        cin >> n[i][j];
     }
  }
  
  for (int i=0;i<fila;i++){
     for(int j=0;j<col;j++)
     {
        cout << n[i][j];
     }
     cout << "\n";
  }
  
  system("pause");
  return 0;
}
