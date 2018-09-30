#include <iostream>
#include <string.h>
#include <stdlib.h>//atoi() - atof()

using namespace std;

int main()
{
  char cad[] = "123.56";
  int num;
  float nu;
  
  nu = atof(cad);
  
  cout << nu << endl;
    
  system("pause");
  return 0;
}
