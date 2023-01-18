#include "Node.h"
#include <iostream>
using namespace std;

Node::Node()
{
    value = 0;
    next = NULL;
}

Node::Node(int newValue, Node *newNext)
{
    value = newValue;
    next = newNext;
}

Node::~Node()
{
}

int Node::getValue()
{
    return value;
}

void Node::setValue(int newValue)
{
    value = newValue;
}

Node* Node::getNext()
{
    return next;
}

void Node::setNext(Node *newNext)
{
    next = newNext;
}

void Node::print()
{
    cout << value;
}