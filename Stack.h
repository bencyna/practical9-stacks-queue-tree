#ifndef STACK_H
#define STACK_H

#pragma once

#include "Node.h"

class Stack
{
public:
    Node * pop();
    void push(Node * node);
    bool isEmpty();


private:
    Node * head;
    Node * tail;
};

#endif