//#include "Persona.h"
#include "Usuario.h"
#include "AdminUsuario.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;



int main(){

    //Persona* p = new Persona();
    //Persona* p1 = new Usuario();

    Usuario* u = new Usuario();
    Usuario* p = new Usuario();
    //p1->setNombre("p1");

    u->setUsuario("usuario");
    u->setNombre("usuario_nombre");
    u->setPassword("password");

    u->setId(111);

    p->setNombre("NombreP");
    cout << u->getNombre() << endl;
    //cout << p1->getNombre() << endl;
    cout << u->getId() << endl;

    AdminUsuario* au = new AdminUsuario();
    Usuario* user;
    au->addUsuario(u);
    au->addUsuario(p);
    au->mostrarUsuarios();
    
    string usuario, password, nom;
    bool men = true;
    int opcion = -1;
    int posUsuario = 0;

    while(men){
        do{
            //menu();
            cin >> opcion;
            switch(opcion){
                case 1://Login
                    cout << "Usuario: "; cin >> usuario;
                    cout << "Password: "; cin >> password;

                    posUsuario = au->posUser(usuario);

                    if(au->login(usuario,password)){  
                        cout << "Welcome!!" 
                            << au->getListaUsuarios().at(posUsuario)->getUsuario() <<endl;
                        //menuUsuario();
                    }else{
                        cout << "No existe" << endl << endl;
                    }
                    break;
                case 2:{//Registar
                    
                    cout << "Ingrese un usuario: " << endl; cin >>usuario;
                    cout << "Ingrese un password: " << endl; cin>> password;
                    cout << "Cual es su nombre? " << endl; cin >> nom;
                    user = new Usuario(usuario,password);
                    user->setNombre(nom);
                    au->addUsuario(user);
                    cout << "Agregado con éxito." << endl;   
                    //delete user;
                       }
                    break;
                case 3://Test
                    au->mostrarUsuarios();
                    break;
                case 0://salir
                    cout << "Saliendo..." << endl;
                    delete au;
                    delete user;
                    break;
                default:
                    cout << "Opción inválida." << endl;
                    break;
            } 
        }while(opcion!=0);
        men = false;
    }

    return 0;
}



