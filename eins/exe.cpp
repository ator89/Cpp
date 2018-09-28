#include <iostream>
#include <string>
#include <vector>
#include "persona.h"

using namespace std;

vector<Persona> lista;
int posU=0;

int login(string u, string p)
{
   for (int i=0; i<lista.size();i++)
   {
       if(lista.at(i).getUsuario() == u && lista.at(i).getPassword() == p)
       {
          posU = i;
          return 1;
          
       }
   }
   
   return 0;
}

int main()
{
  bool a = true;
  int menu = -1;
  
  Persona p;
  p.setUsuario("Nombre");
  cout<< p.getUsuario();
  
  int n;
  
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
                
                cout <<"Usuario: ";
                cin >> usuario;
                cout << "Password: ";
                cin >> password;
                
                if(login(usuario,password)==1)
                {
                   cout << login <<endl;
                   cout << posU<<endl;
                   cout << "Bienvenido ";
                   cout << lista.at(posU).getUsuario()<<endl;
                }else{cout << "No existe ese ususario." << endl << endl;}
                
                
                
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
                cout<<endl<<endl;
                cout << "Lista de Usuarios" << endl;
                for (int i=0; i<lista.size();i++)
                {
                    cout << lista.at(i).getPassword()<<endl;
                }
                break;
                cout<<endl<<endl;
           case 4:
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


