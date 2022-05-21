#include "PrefixExpression.h"
#include <cstddef>

using namespace std;

PrefixExpression::PrefixExpression(string operation)
{
    // loop through operation to create the binary tree structure add to stack, if number remove and make node
    for (int i = 0; i < operation.length(); i++) {
        if (operation[i] == '+' || operation[i] == '-' || operation[i] == '*' || operation[i] == '/') {
            // add to stack
        }
        else {
            // pop top two items from the stack and build mini tree
            // add comment
        }
    }
}

PrefixExpression::~PrefixExpression()
{

}
