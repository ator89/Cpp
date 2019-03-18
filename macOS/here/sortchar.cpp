#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class Nodo{
    //private:
    public:
        int data;
        Nodo* link;
    //public:
        //Destructor
        Nodo();
        //Constructor
        ~Nodo();

        //<<<Linked List>>>
        //Agregar al inicio
        void agregar(Nodo**,int);
        //Agregar en posición
        void agregarPos(Nodo*,int);
        //Eliminar
        void borrar(Nodo*,int);
        //Imprimir
        void imprimir(Nodo**);
       
        //<<<Doubly Linked List>>>
        void addl(Nodo**);
        //<<<Queues>>>
        
        //Agregar
        void enqueue(Nodo**);
        //Remover
        void dequeue(Nodo**);
        //<<<>>>
};

class NodoDL{
    //private:
    public:
        int data;
        NodoDL *next, *prev;

        NodoDL();
        ~NodoDL();

        void insert(NodoDL**, int);

        void imprimirDL(NodoDL**);
};

class NodoStack{
    //private:
    public:
        int data;
        NodoStack* link;

        NodoStack();
        ~NodoStack();

        void push(NodoStack**, int);
        void pop(NodoStack**);
        //Imprimir
        void imprimirS(NodoStack**);
};

void swap(int*,int*);
void bubble(int*, int);
void selection(int*, int);
void imprimir(int*, int);


int main(){
    Nodo* lista = 0;
    cout << "Dirección en main de head->"<< lista << endl;
    int arr[] = {6,1,9,4,7,5,3,8,2,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << endl << "\t\tLINKED LIST\n\n";
    lista->agregar(&lista,5);
    cout << "df" <<&lista <<endl;
    lista->agregar(&lista,6);
    lista->imprimir(&lista);
    
    cout << endl << "\t\tSTACK\n\n";
    NodoStack* pila = 0;
    pila->push(&pila,9);
    pila->push(&pila,7);
    pila->imprimirS(&pila);
    pila->pop(&pila);
    pila->imprimirS(&pila);


    cout << endl;
    imprimir(arr,size);
    //bubble(arr,size);
    selection(arr,size);
    imprimir(arr,size);

    return 0;
}

//Selection sort
void selection(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for( int j = i+1; j < n; j++){
            if(arr[j]< arr[min])
                min = j;
        }
        swap(&arr[i],&arr[min]);
    }
}

//Bubble sort
void bubble(int *arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}

//Print fuction
void imprimir(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << " " << arr[i];
    }
    cout << endl;
}

//Swap using temp variable
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


//-----------------------------------------------------

//
//<<<Funciones de la Linked List>>>
//

//Constructor de Linked List
Nodo::Nodo(){ 
    data = 0;
    link = 0;
}

//Destructor de Linked List
Nodo::~Nodo(){
    if(link)
        delete link;
}

//Agregar al inicio
void Nodo::agregar(Nodo** head, int x){
    Nodo* temp = new Nodo();
    temp->data = x;
    temp->link = nullptr;
    if( *head != nullptr )
        temp->link = *head;
    *head = temp;
}

//imprimir Linked List
void Nodo::imprimir(Nodo** head){
    Nodo* temp = *head;
    while( temp != nullptr ){
        cout << " " << temp->data;
        temp = temp->link;
    }
    cout << endl;
}

//-----------------------------------------------------

//
//<<<Funciones de la Doubly Linked List>>>
//

//Constructor de Linked List
NodoDL::NodoDL(){ 
    data = 0;
    next = 0;
    prev = 0;
}

//Destructor de Linked List
NodoDL::~NodoDL(){
    if(next)
        delete next;
    if(prev)
        delete prev;
}

void insert(NodoDL** head, int x){
    NodoDL* temp = new NodoDL();
    temp->data = x;
    temp->next = 0;
    temp->prev = 0;
    if(*head == 0){
        *head = temp;
        return;
    }
    &head->prev = temp;
    temp->next = *head;
    *head = temp;

}

void imprimirDL(NodoDL** head){
    NodoDL* temp = *head;
    while( temp != nullptr ){
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

//-----------------------------------------------------

//
//<<<Funciones de Stack>>>
//

//Constructor de Stack
NodoStack::NodoStack(){
    data = 0;
    link = 0;
}

//Destructor de Stack
NodoStack::~NodoStack(){
    if(link)
        delete link;
}


//Push
void NodoStack::push(NodoStack** head, int x){
    NodoStack* temp = new NodoStack();
    temp->data = x;
    temp->link = *head;
    *head = temp;
}

//Pop
void NodoStack::pop(NodoStack** head){
    NodoStack* temp = *head;
    if( *head == nullptr) return;
    *head = temp->link;
    //delete temp;
}

//imprimir Stack
void NodoStack::imprimirS(NodoStack** head){
    NodoStack* temp = *head;
    while( temp != nullptr ){
        cout << " " << temp->data;
        temp = temp->link;
    }
    cout << endl;
}

//-----------------------------------------------------

//
//<<<Funciones de Cola>>>
//
//Enqueue
//void Nodo::enqueue(Nodo** )


