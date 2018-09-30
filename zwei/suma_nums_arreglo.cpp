#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
  int n[] = {1,2,3,4,5};
  int suma = 0;
  
  for (int i=0; i<sizeof(n)/sizeof(int);i++)
  {
      suma = suma + n[i];
  }
  
  cout << suma << endl;
  
  
  system("pause");
  return 0;
}
