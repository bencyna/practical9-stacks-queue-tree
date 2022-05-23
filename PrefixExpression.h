#ifndef PREFIXEXPRESSION_H
#define PREFIXEXPRESSION_H

#pragma once

#include "Node.h"
#include <string>
#include "Stack.h"
#include "Queue.h"
#include <string>

class PrefixExpression
{
public:
    PrefixExpression(std::string operation);
    ~PrefixExpression();
    std::string calculate();

private:
    Node * head;
    Stack stack; 
    Stack stack2;
};

#endif

