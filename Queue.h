#ifndef QUEUE_H
#define QUEUE_H

#pragma once

#include "Node.h"

class Queue
{
public:
    Queue();
    Node * dequeue();
    void enqueue(Node * node);
    bool isEmpty();


private:
    Node * head;
    Node * tail;
};

#endif