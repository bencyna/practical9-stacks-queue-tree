#include "PrefixExpression.h"
#include "Node.h"
#include "Stack.h"
#include "Queue.h"
#include <iostream>


using namespace std;

int main() {
  
   string expressionStr;
   getline(cin, expressionStr);
   PrefixExpression * prefixExpression = new PrefixExpression(expressionStr);
   cout << prefixExpression->calculate() << endl; 

    // stack.push()


    // cin of input 
    // string operation;
    // getline(std::cin, operation);

    // input goes into function in prefixExpresssion

    // Function returns the correct value fors

    return 0; 
}