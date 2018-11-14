#include "Persona.h"
#include "Hobbie.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

//Menú principal
void menu();
void menuUsuario(string);//Menú de usuario ingresado


int main(){
     
    Persona* p;
    vector<Persona*> lista;
    vector<Hobbie*> hobs;    

    string user, userL, password, passwordL;
    int posUser = 0;    

    bool m1 = true;
    int menu1 = -1;

    bool m2 = true;
    int menu2 = -1;
   
    while(m1){

        do{
            menu();
            cin >> menu1;

            switch(menu1){
                case 1:{//Login
                    bool esta = false;
                    m2 = true;
                    cout << "Usuario: "; cin >> userL;
                    cout << "Password: "; cin >> passwordL;

                    for( int i = 0; i < lista.size(); i++){
                        //Verificar que el usuario exista en el vector
                        if( lista.at(i)->getUser().compare(userL) == 0 &&
                            lista.at(i)->getPassword().compare(passwordL) == 0){
                            esta = true;
                            posUser = i;
                        }    
                    }
                    
                    //Menú para usuario existentes
                    if(esta){
                        while(m2){
                            do{
                                menuUsuario(lista.at(posUser)->getUser());
                                cin >> menu2;
                                switch(menu2){
                                    case 1://
                                        break;
                                    case 2:{//Listar usuarios
                                        cout << "Lista de usuarios registrados "<< endl;
                                        for(int i = 0; i < lista.size(); i++){
                                            cout << i << " - " << lista.at(i)->getUser()
                                                    << endl;
                                        }
                                    }    
                                    break;
                                    case 3:
                                        break;
                                    case 4:
                                        break;
                                    case 5:{//Test otros
                                        int us = 0;
                                        for ( int i = 0; i < lista.size(); i++){
                                            cout << i << " - " << lista.at(i)->getUser() 
                                                << endl; 
                                        }
                                        cout << "Seleccione un usuario: "; cin >> us;
                                        
                                        Hobbie* h1 = new Hobbie("Guitarra",34);
                                        Hobbie* h2 = new Hobbie("Correr",13);
                                        //hobs = new Hobbie("N",4);               
                                        //Hobbie h1,h2;
                                        //h1.setHobbie(new Hobbie("H",4));
                                        lista.at(us)->setHobbie(h1);
                                        lista.at(us)->setHobbie(h2);
                                        for(int i = 0; i < 
                                            lista.at(us)->getListaHobbies().size(); i++) {
                                            cout << lista.at(us)->getListaHobbies()[i]->getHobbie();
                                        }
                                    }//End case 5
                                        break;
                                    case 0:
                                        cout << "Cerrando sesión..." << endl << endl;
                                        posUser = 0;
                                        break;
                                    default:
                                        cout << "Opción inválida" << endl << endl;
                                        break;

                                }//Final switch menu usuario ingresado
                            }while(menu2 != 0); 
                            m2 = false;
                        }//End while menu de usuario ingresado
                       
                    }else{
                        cout << "No existe el usuario." << endl;
                    }//Final else si el usuario no existe
                    
                }//Fin case 1
                    break;
                case 2:{//Registrar usuarios
                    cout << "\tRegistro de Usuarios"<< endl;
                    cout << "Ingrese su usuario: "; cin >> user;
                    cout << "Ingrese su password: "; cin >> password;

                    p = new Persona(user, password);
                    lista.push_back(p);
                    
                    cout << "Registrado con éxito." << endl << endl;
                }//Fin case 2
                    break;
                case 0:
                    cout << "Saliendo..." << endl;
                    break;
                default:
                    cout << "Opción no válida" << endl;
                    break;
            }//Fin switch menú principal
        }while(menu1 != 0);//salida do-while menú principal
        m1 = false;
    }//Final while menú principa.
 
    return 0;
}

//Menú principal
void menu(){
    cout << "\tMENU"<< endl
        << "1 - Login" << endl
        << "2 - Registro" << endl
        << "0 - Salir" << endl
        << "Ingrese una opción: ";
    cout << endl;
}

//Menú de opciones del usuario
void menuUsuario(string user){
    cout << "\tWelcome " << user << endl << endl
        << "1 - Agregar" << endl
        << "2 - Listar" << endl
        << "3 - Modificar" << endl
        << "4 - Eliminar" << endl
        << "5 - Otros" << endl
        << "0 - Log Out" << endl
        << "Ingrese una opción: ";
}
