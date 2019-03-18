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

        void insert(int);
        void insertAt(int);
        void del(int);
        void print();
};

Nodo* head = nullptr;

Nodo::Nodo(){
    data = 0;
    link = 0;
}

Nodo::~Nodo(){
    if(link)
        delete link;
}

void Nodo::insert(int x){
    Nodo* temp = new Nodo();
    temp->data = x;
    temp->link = 0;
    if( *lista != nullptr ){
        temp->link = head;
    }
    head = temp;
}

void Nodo::insertAt(int x,int n){
    Nodo* temp = new Nodo();
    temp->data = x;
    temp->link = 0;
    if( n == 1){
        temp->link = head;
        head = temp;
        break;
    }
    Nodo* temp2 = head;
    for(int i = 0; i < n-2; i++){
        temp2 = temp2->link;
    }
    temp->link = temp2->link;
    temp2->link = temp;
}

int main(){
    Nodo* lista = nullptr;
    return 0;
}
