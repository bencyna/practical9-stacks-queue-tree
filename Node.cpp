#include "Node.h"

using namespace std;

Node::Node(string data, Node * left, Node * right)
{
    this->data = data;
    this->left = left;
    this->right = right;
    next = NULL;
}

string Node::getData()
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

Node * Node::getNext()
{
    return next;
}

void Node::setNext(Node * next){
    this->next = next;
}