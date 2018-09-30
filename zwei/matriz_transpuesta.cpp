#include <iostream>

using namespace std;

int main()
{
  int matriz[3][3];
  int matrizT[3][3];
  
  for (int i=0; i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
         cout << "Digite un numero ["<< i<<"][" <<j<<"]";
         cin >> matriz[i][j];
      }
  }
  
  cout << "Matriz original"<<endl;
  for(int i=0; i<3;i++)
  {
     for(int j=0; j<3;j++)
     {
        cout << matriz[i][j];
     }
     cout << endl;
  }
  
  cout << "\nMatriz Transpuesta"<<endl;
  for(int i=0; i<3;i++)
  {
     for(int j=0; j<3;j++)
     {
        cout << matriz[j][i];
     }
     cout << endl;
  }
  
  
  system("pause");
  return 0;
}
