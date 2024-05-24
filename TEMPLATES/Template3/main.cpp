#include <iostream>
#include <string>
#include "Stack.h"

int main(){
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.push(40);

    std::cout << "Stack de integers: " << std::endl;
    while (!intStack.isEmpty()){
        std::cout << intStack.top() << std::endl;
        intStack.pop();
    }

    Stack<std::string> stringStack;
    stringStack.push("Treat");
    stringStack.push("People");
    stringStack.push("With");
    stringStack.push("Kindness");
    stringStack.push("<3");

    std::cout << "Stack de strings: " << std::endl;
    while(!stringStack.isEmpty()){
        std::cout << stringStack.top() << std::endl;
        stringStack.pop();
    }
    
    Stack<double> doubleStack;
    doubleStack.push(1.2);
    doubleStack.push(3.4);
    doubleStack.push(5.6);
    doubleStack.push(7.8);

    std::cout << "Stack de doubles: " << std::endl;
    while(!doubleStack.isEmpty()){
        std::cout << doubleStack.top() << std::endl;
        doubleStack.pop();
    }

    return 0;
}