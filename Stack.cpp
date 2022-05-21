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
        Node * temp =  
        // set tail to equal the new node
    }


    bool Stack::isEmpty() {
        if (head == NULL) {
            return true;
        }

        return false;
    }