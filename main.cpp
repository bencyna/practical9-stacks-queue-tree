#include <iostream>
#include "PrefixExpression.h"
#include "Node.h"
#include "Stack.h"


using namespace std;

int main() {

    // TEST for stack

    Stack stack;

    Node * node1 = new Node("1", NULL, NULL);
    Node * node2 = new Node("2", NULL, NULL);
    Node * node3 = new Node("*", NULL, NULL);

    stack.push(node1);
    stack.push(node2);
    stack.push(node3);

    Node * temp = stack.pop();
    cout << temp->getData() << endl;
    //  * expected
    Node * temp2 = stack.pop();
    cout << temp2->getData() << endl;
    // 2 expected
    Node * temp3 = stack.pop();
    cout << temp3->getData() << endl;
    // 1 expected



    // stack.push()


    // cin of input 
    // string operation;
    // getline(std::cin, operation);

    // input goes into function in prefixExpression

    // Function returns the correct value for

    return 0; 
}