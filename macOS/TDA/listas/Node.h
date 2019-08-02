#ifndef NODE_H
#define NODE_H

class Node{
    private:
        int data;
        Node* link;

    public:
        Node();
        ~Node();

        void setData(int);
        void setLink(Node*);

        int getData();
        Node* getLink();
};

#endif
