#include <iostream>
#include"LinkedList.h"

using namespace std;

int main()
{
    Node p(5);
    Node q(3);
    Node r(4);
    Node s(2);

    LinkedList l;
    
    l.insert(&p);    //insertamos los nodos
    l.insert(&q);
    l.insert(&r);
    l.insert(&s);
    
    l.print();
    
    l.remove_(3);   //removemos indicando la posicion
    
    l.print();

    return 0;
}