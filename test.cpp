
#include <iostream>
#include "PrefixExpression.h"
#include "Node.h"
#include "Stack.h"

using namespace std;

int test() {
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


 // Test for queue
    Queue queue;

    Node * node4 = new Node("1", NULL, NULL);
    Node * node5 = new Node("2", NULL, NULL);
    Node * node6 = new Node("*", NULL, NULL);

    queue.enqueue(node4);
    queue.enqueue(node5);
    queue.enqueue(node6);

    Node * temp4 = queue.dequeue();
    cout << temp->getData() << endl;
    //  1 expected
    Node * temp5 = queue.dequeue();
    cout << temp2->getData() << endl;
    // 2 expected
    Node * temp6 = queue.dequeue();
    cout << temp3->getData() << endl;
    // * expected

   return 0;
}