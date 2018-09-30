#include <iostream>

using namespace std;

int main()
{
  int num[2][2]={{1,2},{3,4}};  
  int matriz[2][2];
  
  for (int i=0; i<2;i++)
  {
      for(int j=0; j<2;j++)
      {
         matriz[i][j]= num[i][j];
      }
  }
  
  for (int i = 0; i<2; i++)
  {
      for (int j = 0; j < 2; j++)
      {
          cout << matriz[i][j];
      }
      cout << endl;
  }
  
  system("pause");
  return 0;
}
