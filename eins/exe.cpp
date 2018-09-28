#include <iostream>
#include <string>
#include <vector>
#include "persona.h"

using namespace std;

int main()
{
  bool a = true;
  int menu = -1;
  Persona p;
  p.setUsuario("Nombre");
  cout<< p.getUsuario();
  
  vector<Persona> lista;
  string usuario="",password="";
   
   do{
            
        cout << "Menu" <<endl;
        cout << "1 - Login" << endl;
        cout << "2 - Registro" << endl;
        cout << "3 - Listar Usuarios" << endl;
        cout << "0 - Salir" << endl;
        cin >> menu;
            switch(menu)
        {
           case 1:
                
                cout << "Ingreso al Sistema" << endl;
                
                
                
                break;
           case 2:
                cout << "Registro" << endl;
                cout <<"Usuario: ";
                cin >> usuario;
                cout << "Password: ";
                cin >> password;
                
                p.setUsuario(usuario);
                p.setPassword(password);
                
                lista.push_back(p);
                break;
           case 3:
                cout << "Lista de Usuarios" << endl;
                for (int i=0; i<lista.size();i++)
                {
                    cout << lista.at(i).getPassword()<<endl;
                }
                break;
           case 0:
                break;
           default:
                cout << "Opción inválida" << endl;
                   break;   
        }
        

       }while(menu!=0);
            
    
  system("pause");  
  return 0;
}
