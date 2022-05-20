#ifndef PREFIXEXPRESSION_H
#define PREFIXEXPRESSION_H

#pragma once

#include "Node.h"
#include <string>


class PrefixExpression
{
public:
    PrefixExpression(std::string operation);
    ~PrefixExpression();

private:
    Node * head;
};

#endif

// 
