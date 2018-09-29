#include <iostream>


using namespace std;

int main()
{
  int n, factorial =1;
  
  cout << "Numero: ";
  cin >> n;
  
  for(int i=1; i <=n; i++)
  {
     factorial = factorial * i;
  }
  
  cout << "\nFactorial de " << n << " es " << factorial << endl; 
  
  
  system("pause");
  return 0;
}
