#include <iostream>
#include <string>
#inlcude <vector>
#include "persona.h"

using namespace std;

int main()
{
  bool a = true;
  int menu = -1;
  Persona p;
  p.setUsuario("Nombre");
  cout<< p.getUsuario();
  
  
  string usuario="",password="";
  
  while(true)
  {
    
    do{
       
        cout << "Menu" <<endl;
        cout << "1 - Login" << endl;
        cout << "2 - Registro" << endl;
        cout << "0 - Salir" << endl;
        cin >> menu;
        switch(menu)
        {
           case 1:
                
                cout << "Ingreso al Sistema" << endl;
                
                cout <<"Usuario: ";
                cin >> usuario;
                cout << "Password: ";
                cin >> password;
                
                
                
                break;
           case 2:
                cout << "Registro" << endl;
                break;
           default:
                cout << "Opción inválida" << endl;
                   break;   
        }
        
       
       }while(menu!=0);
       a = false;
                    
  }
  
    
  system("pause");  
  return 0;
}
