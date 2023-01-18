#include "Node.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main(){
    cout << "Hello" << endl;
    char c;
    c = 'h';
    Node n1 = Node(5, NULL);
    Node n2 = Node(6, NULL);
    Node n3 = Node(7, NULL);
    Node n4 = Node(8, NULL);

    LinkedList list = LinkedList();

    // list.insert(&n1, 0);
    list.insert(&n1, 0);
    list.insert(&n2, 0);
    list.insert(&n3, 1);
    list.insert(&n4, 2);
    list.remove(1);
    list.print();
    return 0;
}