//
//  Node.h
//  TDAs
//
//  Created by Angel Torres on 7/29/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef Node_h
#define Node_h

class Node{
private:
    Node* link;
    int data;
public:
    Node();
    ~Node();
    
    void setData(int);
    void setLink(Node*);
    
    int getData();
    Node* getLink();
};
#endif /* Node_h */
