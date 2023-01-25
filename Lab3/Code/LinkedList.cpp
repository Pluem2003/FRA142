#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{ 
    head = NULL;
    tail = NULL;
    size = 0;
}

LinkedList::~LinkedList()
{
}

void LinkedList::insert(Node *newNode, int pos)
{
    if(pos < 0 || pos > size){
        cout << "Invalid position";
        return;
    }

    if (pos == 0){
        newNode->setNext(head);
        head = newNode;
    }else if(pos == size){
        tail->setNext(newNode);
        tail = tail->getNext();
    }else{
        Node *temp = head;
        for(int i=0; i<pos-1; i++){
            temp = temp->getNext();
        }
        newNode->setNext(temp->getNext());
        temp->setNext(newNode);
    }

    if(size == 0){
        tail = newNode;
    }
    size++;
}

Node* LinkedList::remove(int pos)
{
    if(pos < 0 || pos > size){
        cout << "Invalid position";
        return NULL;
    }

    Node *temp = head;
    Node *result = head;
    for(int i=0; i<size-1; i++){
        if (pos == 0){
            head = head->getNext();
            delete temp;
        }else if(i == pos-1){
            Node *del = temp->getNext();
            Node *result = temp->getNext();
            temp->setNext(del->getNext());
            delete del;
        }
        temp = temp->getNext();
    }
    tail = temp;
    size--;

    return result;
}

void LinkedList::print()
{
    Node *temp = head;
    int list[size];
    for(int i=0; i<size; i++){
        cout << temp->getValue() << " ";
        temp = temp->getNext();
    }
    cout << endl;
}