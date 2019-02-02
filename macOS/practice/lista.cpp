#include <iostream>
using std::endl;
using std::cin;
using std::cout;

class Nodo{

    private:
        int dato;
        Nodo* link;
    public:
        Nodo();
        ~Nodo();
        
        Nodo* add(Nodo*,int);
        void imprimir(Nodo*);
};

Nodo::Nodo(){
    dato = 0;
    link = NULL;
}

Nodo::~Nodo(){
}

Nodo* Nodo::add(Nodo* node, int valor){

    Nodo* temp = new Nodo();
    temp->dato = valor;
    temp->link = NULL;
    if(node != NULL) temp->link = node;
    node = temp;
    return node;
}

void Nodo::imprimir(Nodo* node){
    cout << "List is: ";
    while (node != NULL){
        cout << " " << node->dato;
        node = node->link;
    }
    printf("\n");
}

int main(){
    Nodo* no = NULL;

    //no->add(15);

    int n,i,x;
    cout << "Cuantos numeros: " << endl;
    cin >>  n;

    for(i = 0; i < n; i++){
        printf("enter the number \n");
        cin >> x;
        no = no->add(no,x);
        no->imprimir(no);
    }

    return 0;
}
