#ifndef STACK_H
#define STACK_H

#pragma once

#include "Node.h"

class Stack
{
public:
    Stack();
    Node * pop();
    // i have made this a queue
    void push(Node * node);
    bool isEmpty();


private:
    Node * head;
    Node * tail;
};

#endif