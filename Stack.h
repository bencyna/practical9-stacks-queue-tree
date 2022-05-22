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
    Node * peak();


private:
    Node * head;
};

#endif