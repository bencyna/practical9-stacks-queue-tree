#ifndef NODE_H
#define NODE_H

#pragma once

class Node
{
public:
    Node(int data, Node * left, Node * right);
    int getData();
    void setData(int data);
    Node * getLeft();
    void setLeft(Node*left);
     Node * getRight();
    void setRight(Node*right);

private:
    int data;
    Node * left;
    Node * right;
};

#endif