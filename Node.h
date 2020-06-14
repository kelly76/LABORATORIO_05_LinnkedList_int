#include <iostream>

class Node {
private:
    int elem;
    Node *next;
public:
    Node();
    Node(int);
    int getElem();
    void setElem(int);
    Node* getNext();
    void setNext(Node*);
};