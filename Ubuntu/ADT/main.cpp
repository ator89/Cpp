#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
#include "Nodo.h"
#include "Lista.h"
#include "Persona.h"

void menu();

int main(){

    Lista* lista = new Lista();

    Persona* p = new Persona();
    p->setId(1234);
    p->setNombre("Angel");
    p->setApellido("Torres");
    
    Persona* p1 = new Persona();
    p1->setId(111);
    p1->setNombre("Otro");
    p1->setApellido("Apellido");
    
    Persona* p2 = new Persona("Otro","Nombre",45);
    Persona* p3 = new Persona("Goku","San",44);
    Persona* p4 = new Persona("Hay","Mas",55);
    
    lista->add(*p2);
    lista->add(*p3);
    lista->add(*p4);
    lista->add(*p);
    lista->add(*p1);
    lista->imprimir();
  
    delete p2;
    delete p3;
    delete p4; 
    delete p;
    delete p1;

    std::string nombre, apellido;
    int id;
    bool b = true;
    int opc = -1;
    while (b){
        do{
            menu();
            cin >> opc;
            switch(opc){
                case 1:{//Agregar
                    cout << "Ingrese nombre: ";
                    cin >> nombre;
                    cout << "Apellido: ";
                    cin >> apellido;
                    cout << "ID: ";
                    cin >> id;
                    p = new Persona();
                    p->setNombre(nombre);
                    p->setApellido(apellido);
                    p->setId(id);
                    lista->add(*p);
                    cout << "Agregado con éxito." << endl;
                    delete p;}
                    break;
                case 2:{//Agregar posición
                    int x;
                    p = new Persona();
                    cin >>x;
                    cin >>nombre;
                    cin >>apellido;
                    cin >>id;
                    p->setNombre(nombre);
                    p->setApellido(apellido);
                    p->setId(id);
                    lista->add(*p);
                    delete p;}
                    break;
                case 3://Eliminar
                    int poe;
                    //lista->revertir();
                    lista->imprimir();
                    cout << "Seleccione posición a eliminar: ";
                    cin >> poe;
                    lista->eliminar(poe);
                    cout << "Eliminado con éxito.";
                    lista->imprimir(); 
                    break;
                case 4://Listar
                    lista->revertir();
                    lista->imprimir();
                    break;
                case 0://Exit
                    break;
                default://Invalid option
                    cout << "Opción incorrecta" << endl;
                    break;
            }//end switch
        }while(opc != 0);//end do-while main menu
        b = false;
    }//end while

    delete lista;
    delete p;
    
    return 0;
}

void menu(){
    cout << "\t\t\tListas Enlazadas\n\n";
    cout << "1 - Agregar al inicio\n2 - Agregar en posición X\n"<<
            "3 - Eliminar\n4 - Listar\n0 - Salir\n" << "Seleccione: "<< endl;
}
