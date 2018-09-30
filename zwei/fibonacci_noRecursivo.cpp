#include <iostream>

using namespace std;

int main()
{
  int n, x=0, y=1, z=1;
  
  cout << "N ";cin>>n;
  
  for (int i=1; i<=n; i++)
  {
      z = x + y;
      cout << z << " ";
      x=y;
      y=z;
  }
  
  system("pause");
  return 0;
}
