#ifndef STACK_H
#define STACK_H

#pragma once

#include "Node.h"

class Stack
{
public:
    Stack();
    Node * pop();
    void push(Node * node);
    bool isEmpty();


private:
    Node * head;
    Node * tail;
};

#endif