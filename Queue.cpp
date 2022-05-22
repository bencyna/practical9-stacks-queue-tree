#include "Queue.h"
#include <iostream> //need to remove


    Queue::Queue() {
        head = NULL;
    }

    Node * Queue::dequeue() {
        Node * temp = head;

        head = head->getLeft();

        return temp;
        // because we are not deleting the node, this may cause issues later
    }
    
    void Queue::enqueue(Node * node) {
        if (head == NULL) {
            head = node;
        }
        else {
            node->setLeft(head);
            head = node;
        }
    }


    bool Queue::isEmpty() {
        if (head == NULL) {
            return true;
        }
        return false;
    }