#ifndef NODE_H
#define NODE_H

class Node{
    private:
        Node* next;
        Node* prev;
        int data;
    public:
        Node();
        ~Node();

        void setNext(Node*);
        void setPrev(Node*);
        void setData(int);

        Node* getNext();
        Node* getPrev();
        int getData();
};

#endif
