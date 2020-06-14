#include<iostream>
#include"Node.h"

class LinkedList {
private:
    int size;
    Node* head;
public:
    LinkedList();
    void insert(Node*);
    void remove_(int);
    void print();
    ~LinkedList();
};