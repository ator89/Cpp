#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Node{
	private:
		int data;
		Node* link;
	public:
		Node();
		~Node();

		Node* add(Node*, int);
		void Delete(Node*, int);
		void addPos(Node*,int,int);
		void printi(Node*);
};

Node::Node(){
	data = 0;
	link = nullptr;	
}

Node::~Node(){
	if(link)
		delete link;
}

Node* Node::add(Node* head, int x){
	Node* temp = new Node();
	temp->data = x;
	temp->link = nullptr;
	if( head != nullptr )
		temp->link = head;
	head = temp;
	return head;
}

void Node::printi(Node* head){
	//Node* temp = head;
	cout << "valores: ";
	while(head != nullptr){
		cout << " " << head->data;
		head = head->link;
	}
	cout << endl;
}

int main(){
	
	Node* head = nullptr;

	head = head->add(head,4);
	head = head->add(head,1);
	head = head->add(head,8);
	head->printi(head);

	return 0;
}

