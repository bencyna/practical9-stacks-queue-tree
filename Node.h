#ifndef NODE_H
#define NODE_H

#pragma once

class Node
{
public:
    Node(int data, Node * next);
    int getData();
    void setData(int data);
    Node * getNext();
    void setNext(Node*next);

private:
    int data;
    Node * next;
};

#endif