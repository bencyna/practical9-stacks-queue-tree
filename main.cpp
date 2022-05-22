#include "PrefixExpression.h"
#include "Node.h"
#include "Stack.h"
#include "Queue.h"
#include <iostream>


using namespace std;

int main() {

   PrefixExpression * prefixExpression = new PrefixExpression("* - 5 6 7");
   cout << prefixExpression->calculate() << endl; 
    // stack.push()


    // cin of input 
    // string operation;
    // getline(std::cin, operation);

    // input goes into function in prefixExpression

    // Function returns the correct value for

    return 0; 
}