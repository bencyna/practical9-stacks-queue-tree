#include "Stack.h"
#include <iostream> //need to remove


    Stack::Stack() {
        tail = NULL;
        head = NULL;
    }

    Node * Stack::pop() {
        Node * temp = head;

        head = head->getLeft();

        return temp;
        // because we are not deleting the node, this may cause issues later
    }
    
    void Stack::push(Node * node) {
        if (head == NULL) {
            head = node;
        }
        else {
            node->setLeft(head);
            head = node;
        }

        tail = node;

    }


    bool Stack::isEmpty() {
        if (head == NULL) {
            return true;
        }

        return false;
    }