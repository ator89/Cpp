#include <iostream>

using namespace std;

int main()
{
  int num[100][100],fil,col;
  char flag = 'f';
  
  cout << "Número de filas: ";cin >> fil;
  cout << "Número de columnas: ";cin>>col; 
  
  for(int i=0; i<fil; i++){
     for(int j=0; j<col; j++){
        cout << "Ingrese un numero ["<<i<<"]["<<j<<"]: ";cin >> num[i][j];
     }
  }
  
  if(fil==col){
     for(int i=0; i<fil; i++){
        for(int j=0;j<col;j++){
           if(num[i][j]==num[j][i]){
              flag='v';
           }
        }
     }
  }
  
  if(flag == 'v'){
     cout << "Matriz simétrica"<<endl;
  }else{ cout << "No es simétrica"<<endl;}
  
  
  system("pause");
  return 0;
}
