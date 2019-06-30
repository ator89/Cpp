#include "LinkedList.h"
#include "User.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;

//menu
void menu();
void signup(User*, LinkedList*);
void imprimir(LinkedList*);

int main(){

    LinkedList* lista = new LinkedList();
    User* user = nullptr;

    bool menuActivo = true;
    int optMenu = -1;

    while(menuActivo){

        do{
            menu();
            cin >> optMenu;
            switch(optMenu){
                case 1:
                    signup(user,lista);
                    break;
                case 2:
                    break;
                case 3:
                    imprimir(lista);
                    break;
                case 0://Exit
                    break;
                default:
                    cout << "" << endl;
                    break;
            }
        }while(optMenu != 0);
        menuActivo = false;
    }


    return 0;
}

void signup(User* user, LinkedList* lista){
    
    string username, password;

    cout << "Usuario: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    user = new User(username,password);
    lista->insert(user);

}

void imprimir(LinkedList* list){
    list->show();
}

void menu(){
    cout << "\n\tMENU\n\n"
        << "1 - Register\n"
        << "2 - Log In\n"
        << "0 - Exit\n"
        << "Select: ";
}
