#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
  char word[]= "Angel";
  char word1[] = {'A','n','g','e','l'};
  char nombre[20];
  
  cout << "Wie heissen Sie?";
  cin.getline(nombre,20,'\n');
  //gets(nombre);
  cout << nombre << endl;
    
  cout<< word <<endl;
  cout << word1 << endl;
  
  system("pause");
  return 0;
}
