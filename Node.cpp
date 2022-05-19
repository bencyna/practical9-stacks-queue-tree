#include "Node.h"

Node::Node(int data, Node * left, Node * right)
{
    this->data = data;
    this->left = left;
}

int Node::getData()
{
    return data;
}

void Node::setData(int dataInp){
    data = dataInp;
}

Node * Node::getLeft()
{
    return left;
}

void Node::setLeft(Node * left){
    this->left = left;
}

Node * Node::getRight()
{
    return right;
}

void Node::setRight(Node * right){
    this->right = right;
}