  #include<iostream>
  #include"Node.h"
  
  using namespace std;
   
    Node::Node(){
        elem=0;
        next=nullptr;
    }
    Node::Node(int e){
        elem=e;
        next=nullptr;
    }
    int Node::getElem(){
        return elem;
    }
    void Node::setElem(int e){
        elem=e;
    }
    Node* Node::getNext(){
        return next;
    }
    void Node::setNext(Node *n){
        next=n;
    }