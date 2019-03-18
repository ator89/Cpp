#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Nodo{
    private:
        int data;
        Nodo* link;
    public:
        Nodo();
        ~Nodo();
        
        Nodo* add(Nodo**,int);
        void addAt();
        void remove(Nodo**,int);
        void imPrint();
};

Nodo::Nodo(){
    data = 0;
    link = 0;
}

Nodo::~Nodo(){
    if(link)
        delete link;
}

Nodo* Nodo::add(Nodo** head, int x){
    cout << "Comienza la función add(Nodo** head,int x):\n";
    cout << "Dirección de head->"<<*head <<endl;
    cout << "Valor x->"<< x << endl;
    
    Nodo* temp = new Nodo();
    
    cout << "Dirección de temp: "<<temp <<endl;

    temp->data = x;
    temp->link = 0;
    if(*head != 0){
        temp->link = *head;
    }
    *head = temp;
    cout << "Nueva dirección de head->"<<*head << endl;
    return *head;
}

void Nodo::remove(Nodo** head, int n){
    cout << "Comienza la función remove(Nodo** head, int n):\n";
    Nodo* temp = *head;
    cout << "Dirección de head->" << *head << endl;
    cout << "Valor de n: " << n << endl;

    if( n == 1 ){
        cout << "<<Eliminando posición 1>>\n\n";
        *head = temp->link;
        cout << "nueva dirección de head->" << *head << endl << endl;
        delete temp;
        return;
    }
    //Nodo* temp2 = *head;
    cout << "Dirección de temp->" << temp << endl << endl;
    for(int i = 0; i < n-2; i++){
        temp = temp->link;
        cout << "Dirección después de recorrer n-2 a temp->"<< temp<<endl<<endl;
    }
    Nodo* temp2 = temp->link;
    temp->link = temp2->link;
    cout << "Asignar el valor temp2->link a temp->link = "<< temp->link << endl;
    //temp2->link = temp;
    //cout << "Asignar el valor temp2->link a temp = " << temp2->link << endl << endl;
    delete temp2;
}

int main(){
    
    cout << "\n\n\tSTART" << endl << endl;

    cout << "Se declara la variable head\n";
    Nodo* head = NULL;

    cout << "Dirección incial de head->" << head << endl;

    cout << "\nLlamada a función add(Nodo*,int)\n"<< endl;
    head = head->add(&head,5);
    cout << "Dirección después de agregar valor en head->" <<head << endl;
    
    cout << "\nLlamada a función add(Nodo*,int)\n"<< endl;
    head = head->add(&head,6);
    cout << "Dirección después de agregar valor en head->" <<head << endl;

    cout << "\nLlamada a función add(Nodo*,int)\n"<< endl;
    head = head->add(&head,7);
    cout << "Dirección después de agregar valor en head->" <<head << endl;

    cout << "\nLlamada a función remove(Nodo*,int)\n"<< endl;
    head->remove(&head,3);
    cout << "Dirección después de agregar valor en head->" <<head << endl;
    return 0;
}
