#include "Stack.h"


    Stack::Stack() {
        tail = NULL;
        head = NULL;
    }

    Node * Stack::pop() {
        return tail;
    }
    
    void Stack::push(Node * node) {
        // make temp for tail pointer
        Node * temp =  tail;
        temp->setLeft(node);
        // set tail to equal the new node
        tail = node;
    }


    bool Stack::isEmpty() {
        if (head == NULL) {
            return true;
        }

        return false;
    }