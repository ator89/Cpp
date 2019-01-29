#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Nodo{
	private:
		int data;
		Nodo* next;
	public:	
		Nodo();
		~Nodd();

		void add(Node**,int);
		void print();

};

Nodo::Nodo(){
	this->data = 0;
	this->next = NULL;
}

void Nodo::add(Nodo** node, int valor){
	Nodo* temp = new Nodo();
	temp->data = valor;
	temp->next = NULL;
	if(*node != NULL)
		temp->next = *node;
	*node = temp;
}

int main(){
	
	Nodo* nod = NULL;

	nod -> add(&nod,5);

	return 0;
}