#include <iostream>

using namespace std;

int main()
{
  int num = 9;
  int div = 0;
  for (int i=1; i<num; i++){
      if(num % i == 0 ) div+=i;    
  }
  if (num ==div ) cout<< num << " es perfecto.";
  else std::cout << num << " no es perfecto.";
  
  system("pause");
  return 0;
}
