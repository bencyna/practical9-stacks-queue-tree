#include "Stack.h"
#include <iostream> //need to remove


    Stack::Stack() {
        head = NULL;
    }

    Node * Stack::pop() {
        Node * temp = head;

        head = head->getNext();

        return temp;
        // because we are not deleting the node, this may cause issues later
    }
    
    void Stack::push(Node * node) {
        if (head == NULL) {
            head = node;
        }
        else {
            node->setNext(head);
            head = node;
        }
    }


    bool Stack::isEmpty() {
        if (head == NULL) {
            return true;
        }

        return false;
    }

    Node * Stack::peak() {
        return head;
    }