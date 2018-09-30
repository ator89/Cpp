#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   int n[100],c;
   
   cout << "Numero de elementos: ";cin>>c;
   
   for(int i=0; i <c;i++)
   {
      cout << "Numero "<<endl;
      cin >> n[i];
   }
   
   for(int i=0;i<c;i++)
   {
      cout << i << " -> " << n[i]<<endl;
   }
    
    
  system("pause");
  return 0;
}
