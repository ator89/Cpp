#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char frase[30];
  int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;
    
  cout << "Screiben Sie etwas: ";
  cin.getline(frase,30,'\n');
  
  for(int i=0;i<30;i++){
     switch(frase[i]){
        case 'a': vocal_a++; break;
        case 'e': vocal_e++; break;
        case 'i': vocal_i++; break;
        case 'o': vocal_o++; break;
        case 'u': vocal_u++; break;
     }        
  }  
  
  cout << "a: " << vocal_a << endl;
  cout << "e: " << vocal_e << endl;
  cout << "i: " << vocal_i << endl;
  cout << "o: " << vocal_o << endl;
  cout << "u: " << vocal_u << endl;
  
  system("pause");
  return 0;
}
