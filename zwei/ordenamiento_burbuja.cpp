#include <iostream>

using namespace std;

int main()
{
  int num[] = {5,3,1,2,4};
  int i,j,aux;
  
  //Bubble sort
  for (i=0;i<5;i++){
     for(j=0;j<5;j++){
        if(num[j]>num[j+1]){
           aux = num[j];
           num[j]=num[j+1];
           num[j+1]=aux;
        }
     }
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
