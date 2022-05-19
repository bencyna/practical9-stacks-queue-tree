#include "Node.h"

Node::Node(int data, Node * next)
{
    this->data = data;
    this->next = next;
}

int Node::getData()
{
    return data;
}

void Node::setData(int dataInp){
    data = dataInp;
}

Node * Node::getNext()
{
    return next;
}

void Node::setNext(Node * next){
    this->next = next;
}