#include "PrefixExpression.h"
#include <cstddef>

using namespace std;

PrefixExpression::PrefixExpression(string operation)
{
    // loop through operation to create the binary tree structure add to stack, if number remove and make node
    for (int i = 0; i < operation.length(); i++) {
        // create stack
        std::string itemAsString(1, operation[i]);
        Node * newNode = new Node(itemAsString, NULL, NULL);
        stack.push(newNode);
    }

    // current stack = "756-*"
    // add numbers to queue, make mini tree if operator
    for (Node * i = stack.peak(); i != NULL; i = stack.peak()) {
        if (i->getData() == "+" || i->getData() == "-" || i->getData() == "*" || i->getData() == "/") {
            // pop top two items from the stack and build mini tree
            Node * item1 = stack.pop();
            Node * item2 = stack.pop();
        }
        else if (i->getData().find_first_not_of("0123456789") == string::npos) {
            
        }
    }

}

PrefixExpression::~PrefixExpression()
{

}
