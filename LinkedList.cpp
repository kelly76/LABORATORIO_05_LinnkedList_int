#include<iostream>
#include"LinkedList.h"

using namespace std;
    
    LinkedList::LinkedList(){
        head=nullptr;
        size=0;
    }
    
    void LinkedList::insert(Node* new_node){
        Node* actual=head;
        if(head == nullptr)   //si nuestra LinkedList esta vacia
            head=new_node;
        else{
            if(new_node->getElem() < head->getElem()){    //si el nodo nuevo es menor que el nodo head
                new_node->setNext(actual);
                head=new_node;
            }
            else{
                //buscamos la posicion que le corresponde al nuevo nodo
                while(actual->getNext() != nullptr){
                    //ubicamos al nodo actual una posicion antes
                    if(actual->getNext()->getElem() >= new_node->getElem()){
                        break;
                    }
                    actual=actual->getNext();
                }
                new_node->setNext(actual->getNext());
                actual->setNext(new_node);
            }
        }
        size++;
    }
    
    void LinkedList::remove_(int pos){
        Node* eliminar;     //nodo que queremos eliminar
        Node* aux=head;     //nodo que ubicaremos una posición antes del nodo a eliminar
        if(pos == 1)
            head=head->getNext();
        else{
            for( int i=2; i < pos; i++){
                aux=aux->getNext();
            }
            eliminar=aux->getNext();
            aux->setNext(eliminar->getNext());
        }
        size--;
    }
    
    void LinkedList::print(){
        Node* aux=head;
        for( int i=0; i < size;i ++){
            cout<<aux->getElem()<<" ";
            aux=aux->getNext();
        }
        cout<<endl;
    }
    
    LinkedList::~LinkedList(){
        //avanzamos nodo por nodo hasta ubicar a head como nulo
        while(head->getNext() != nullptr){
            head=head->getNext();
        }
        head=head->getNext();
    }
  