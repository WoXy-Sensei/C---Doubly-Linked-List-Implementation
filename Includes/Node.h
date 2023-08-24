//
// Created by bardi on 17.06.2023.
//

#include "iostream"

#ifndef INC_2DIRECLINKEDLIST_NODE_H
#define INC_2DIRECLINKEDLIST_NODE_H

#endif //INC_2DIRECLINKEDLIST_NODE_H



using namespace std;

template<typename type>
class Node{
public:

    Node(type _value){
        next = nullptr ;
        prev = nullptr ;
        value = _value;
    }
    Node<type>* next;
    Node<type>* prev;
private:
    type value;
};
