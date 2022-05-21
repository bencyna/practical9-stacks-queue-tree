#include "Stack.h"


    Stack::Stack() {
        tail = NULL;
        head = NULL;
    }

    Node * Stack::pop() {
        Node * temp = tail;

        Node * prev = NULL;
        for (Node * n = head; n != NULL; n = n->getLeft()) {
            if (n->getLeft() == NULL) {
                // delete current node
                delete n;
                tail = prev;
            }
        }

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