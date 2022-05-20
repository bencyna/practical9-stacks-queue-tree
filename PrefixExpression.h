#ifndef PREFIXEXPRESSION_H
#define PREFIXEXPRESSION_H

#pragma once

#include "Node.h"
#include <string>
#include <stack>  

class PrefixExpression
{
public:
    PrefixExpression(std::string operation);
    ~PrefixExpression();

private:
    Node * head;
    std::stack<std::string> stack; 
};

#endif

// 
