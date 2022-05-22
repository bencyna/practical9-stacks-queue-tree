#include "PrefixExpression.h"
#include <cstddef>
#include <iostream> // need to remove 

using namespace std;

PrefixExpression::PrefixExpression(string operation)
{
    // loop through operation to create the binary tree structure add to stack, if number remove and make node
    for (int i = 0; i < operation.length(); i++) {
        // queue
        std::string itemAsString(1, operation[i]);

        if (operation[i] == '+' || operation[i] == '-' || operation[i] == '*' || operation[i] == '/') {
            // add to stack
            Node * newNode = new Node(itemAsString, NULL, NULL);
            stack.push(newNode);
        }
        else if (itemAsString.find_first_not_of("0123456789") == string::npos) {
            // pop top two items from the stack and build mini tree
            Node * item1 = stack.pop();
            Node * item2 = stack.pop();
            cout << item1->getData() << " " << item2->getData() << endl;
        }
    }
}

PrefixExpression::~PrefixExpression()
{

}
