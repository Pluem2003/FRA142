#ifndef NODE_H
#define NODE_H

class Node
{
private:
    int value;
    Node *next;
public:
    Node();
    Node(int newValue, Node *newNext);
    ~Node();
    int getValue();
    void setValue(int newValue);
    Node* getNext();
    void setNext(Node *newNext);
    void print();
};

#endif
