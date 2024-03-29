#ifndef NODE_H
#define NODE_H

#pragma once

#include <string>

class Node
{
public:
    Node(std::string data, Node * left, Node * right);
    std::string getData();
    void setData(std::string data);
    Node * getLeft();
    void setLeft(Node*left);
    Node * getRight();
    void setRight(Node*right);
    Node * getNext();
    void setNext(Node*next);
private:
    std::string data;
    Node * left;
    Node * right;
    Node * next;
};

#endif