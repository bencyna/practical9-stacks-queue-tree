#include "PrefixExpression.h"
#include <cstddef>
#include <iostream>

using namespace std;

string PrefixExpression::calculate() {
    cout << "hello" << endl;
    return head->getData();
}

PrefixExpression::PrefixExpression(string operation)
{
    // loop through operation to create the binary tree structure add to stack, if number remove and make node
    for (int i = 0; i < operation.length(); i++) {
        // create stack
        if (operation[i] != ' ') {
        std::string itemAsString(1, operation[i]);
        Node * newNode = new Node(itemAsString, NULL, NULL);
        stack.push(newNode);
        }
    }

    // current stack = "756-*"

    while (!stack.isEmpty()) {
        Node * currentNode = stack.pop();
        string currentNodeData = currentNode->getData();
        if (currentNodeData == "+" || currentNodeData == "-" || currentNodeData == "*" || currentNodeData == "/") {
            Node * number1 = queue.dequeue();
            if (queue.isEmpty()) {
                head = number1;
                return;
            }
            Node * number2 = queue.dequeue();

            // create mini tree
            Node * op = new Node(currentNodeData, number1, number2);
            queue.enqueue(op);
        }
        else if (currentNodeData.find_first_not_of("0123456789") == string::npos) {
            queue.enqueue(currentNode);
        }
    }

    // queue = "756-*" first in first out = 7
    // for (Node * i = queue.dequeue(); i != NULL; i = queue.dequeue()) {
    //     cout << i->getData() << endl;
    //     string currentNodeData = i->getData();
    //     if (currentNodeData == "+" || currentNodeData == "-" || currentNodeData == "*" || currentNodeData == "/") {
    //         // pop top two items from the stack and build mini tree

    //         Node * number1 = queue.dequeue();
    //         if (queue.isEmpty()) {
    //             head = number1;
    //             return;
    //         }
    //         Node * number2 = queue.dequeue();

    //         // create mini tree
    //         Node * op = new Node(currentNodeData, number1, number2);
    //         queue.enqueue(op);
    //     }
    //     else if (currentNodeData.find_first_not_of("0123456789") == string::npos) {
    //         queue.enqueue(new Node(currentNodeData, NULL, NULL));
    //     }
    // }

}

PrefixExpression::~PrefixExpression()
{

}
