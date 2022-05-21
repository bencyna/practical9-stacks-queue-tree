#include "Node.h"

using namespace std;

Node::Node(string data, Node * left, Node * right)
{
    this->data = data;
    this->left = left;
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