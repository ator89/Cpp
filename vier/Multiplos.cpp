#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int num;
  int mult2=0,mult3=0;
  for(int i=0; i<4; i++){
     printf("Num: ");
     scanf("%d", &num);
     if(num %2 ==0) mult2++;
     if(num %3 ==0) mult3++;
  }
  
  cout << "Multiplos de 2: "<< mult2 << endl;
  cout << "Multiplos de 3: "<< mult3 << endl;
  getch();  
  return 0;
}
