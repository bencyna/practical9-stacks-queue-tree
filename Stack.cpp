#include "Stack.h"
#include <iostream> //need to remove


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
                tail = prev;
                if (prev != NULL) {
                    prev->setLeft(NULL);
                }
            }
            else {
                prev = n;
            }

        }
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