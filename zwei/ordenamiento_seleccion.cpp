#include <iostream>

using namespace std;

int main()
{
  int num[] = {4,3,1,5,2};
  int i,j,aux,min;
  
  for(i=0;i<5;i++){
     min = i;
     for(j=i+1;j<5;j++){
        if(num[j]<num[min]){
           min = j;
        }
     }
     aux = num[i];
     num[i] = num[min];
     num[min]=aux;
  }
  
  cout << "Ascendente: "<<endl;
  for(i=0;i<5;i++){
     cout << num[i]<<endl;
  }
  
  cout << "Descendente: "<<endl;
  for(i=4;i>=0;i--){
     cout << num[i]<<endl;
  }
    
  system("pause");
  return 0;
}
