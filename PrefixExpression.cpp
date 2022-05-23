#include "PrefixExpression.h"
#include <cstddef>
// #include <iostream>

using namespace std;

string DFS(Node * currentNode) {
    if (currentNode == NULL) {
        return "";
    }

    // if we see a - or + we add open parenthatis, do everything on right, then add close parenthasis
    string currentNodeData = currentNode->getData();

    if (currentNodeData == "+" || currentNodeData == "-") {
        return "(" + DFS(currentNode->getLeft()) + currentNodeData + DFS(currentNode->getRight()) + ")";
    }

    return DFS(currentNode->getLeft()) + currentNodeData + DFS(currentNode->getRight());
}

string PrefixExpression::calculate() {
    // in fix expression
    string expression = DFS(head);
    
    // use queue to create a new expression in int value using shunting yard algorithm



    return expression;
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
        Node * currentNode = stack.pop();// *
        string currentNodeData = currentNode->getData();
        if (currentNodeData == "+" || currentNodeData == "-" || currentNodeData == "*" || currentNodeData == "/") {
            Node * number1 = stack2.pop(); //[-]
           
            Node * number2 = stack2.pop(); //7

            // create mini tree
            Node * op = new Node(currentNodeData, number1, number2);
            stack2.push(op);
        }
        else if (currentNodeData.find_first_not_of("0123456789") == string::npos) {
            stack2.push(currentNode);
        }
    }
    // tree stack1 should only have 1 item in it, if not then it is an invalid expression
    Node * tree = stack2.pop(); //[-]
    head = tree;
    return;
}
