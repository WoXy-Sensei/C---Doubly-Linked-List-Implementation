//
// Created by bardi on 17.06.2023.
//

#include "iostream"
#include "Node.h"
#ifndef INC_2DIRECLINKEDLIST_2DIRECLIST_H
#define INC_2DIRECLINKEDLIST_2DIRECLIST_H

#endif //INC_2DIRECLINKEDLIST_2DIRECLIST_H

using namespace std;

template<typename type>
class List{
public:
    List(){
        this->first = nullptr;
    };
    void Append(type value){

        Node<type>* New = new Node<type>(value);

        if(first == nullptr){
            first = New;
            return;
        }

        Node<type>* skip = first;

        while(skip->next != nullptr){
            skip = skip->next;
        }
        skip->next = New;
        New->prev = skip;

    }
    void Remove(){
        if(first == nullptr){
            return;
        }

        Node<type>* skip = first;

        while(skip->next->next != nullptr){
            skip = skip->next;
        }

        delete skip->next;
        skip->next = 0;
    }
    friend ostream& operator <<(ostream& os, const List<type>& liste ){
        if(liste.first == 0){
            os << "0" << endl;

        }
        Node<type>* skip = liste.first;
        while(skip != nullptr){
            os<< skip <<","<< skip->next << "," << skip->prev << endl;
            skip = skip->next;
        };
    };
private:

    Node<type>* first;
};