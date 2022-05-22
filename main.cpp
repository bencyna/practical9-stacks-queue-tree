#include <iostream>
#include "PrefixExpression.h"
#include "Node.h"
#include "Stack.h"
#include "Queue.h"


using namespace std;

int main() {

    // Test for queue
    Queue queue;

    Node * node4 = new Node("1", NULL, NULL);
    Node * node5 = new Node("2", NULL, NULL);
    Node * node6 = new Node("*", NULL, NULL);

    queue.enqueue(node4);
    queue.enqueue(node5);
    queue.enqueue(node6);

    Node * temp = queue.dequeue();
    cout << temp->getData() << endl;
    //  1 expected
    Node * temp2 = queue.dequeue();
    cout << temp2->getData() << endl;
    // 2 expected
    Node * temp3 = queue.dequeue();
    cout << temp3->getData() << endl;
    // * expected


    // stack.push()


    // cin of input 
    // string operation;
    // getline(std::cin, operation);

    // input goes into function in prefixExpression

    // Function returns the correct value for

    return 0; 
}