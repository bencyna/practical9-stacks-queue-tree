#ifndef PREFIXEXPRESSION_H
#define PREFIXEXPRESSION_H

#pragma once

#include "Node.h"
#include <string>
#include <Stack.h>  
#include <Queue.h>  

class PrefixExpression
{
public:
    PrefixExpression(std::string operation);
    ~PrefixExpression();

private:
    Node * head;
    Stack stack; 
    Queue queue;
};

#endif

