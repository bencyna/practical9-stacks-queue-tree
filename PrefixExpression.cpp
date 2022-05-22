#include "PrefixExpression.h"
#include <cstddef>

using namespace std;

PrefixExpression::PrefixExpression(string operation)
{
    // loop through operation to create the binary tree structure add to stack, if number remove and make node
    for (int i = 0; i < operation.length(); i++) {
        // queue
        if (operation[i] == '+' || operation[i] == '-' || operation[i] == '*' || operation[i] == '/') {
            // add to stack
            std::string s(1, operation[i]);
            Node * newNode = new Node(s, NULL, NULL);

            // Sample input:  * - 5 6 7
            // Sample output:  (5 - 6) * 7 = -7

            // [*-567] queue
            // [7, [-(5, 6)]] //stack

        }
        else {
            // pop top two items from the stack and build mini tree
        }
    }
}

PrefixExpression::~PrefixExpression()
{

}
