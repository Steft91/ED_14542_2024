#include "Stack.h"
#include <iostream>
#include <cstdlib>

Stack::Stack(int initial_capacity) {
    capacity = initial_capacity;
    data = (int*)malloc(capacity * sizeof(int));  // Using malloc to allocate memory
    if (data == nullptr) {
        std::cerr << "Error allocating memory" << std::endl;
        exit(1);
    }
    top = -1;
}

Stack::~Stack() {
    free(data);  // Using free to deallocate memory
}

void Stack::resize(int new_capacity) {
    data = (int*)realloc(data, new_capacity * sizeof(int));  // Using realloc to resize memory
    if (data == nullptr) {
        std::cerr << "Error reallocating memory" << std::endl;
        exit(1);
    }
    capacity = new_capacity;
}

void Stack::push(int value) {
    if (top == capacity - 1) {
        resize(capacity * 2);  // Doubling the capacity if the stack is full
    }
    data[++top] = value;
}

int Stack::pop() {
    if (isEmpty()) {
        std::cerr << "Stack underflow" << std::endl;
        exit(1);
    }
    return data[top--];
}

void Stack::print() const {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    for (int i = top; i >= 0; --i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

bool Stack::search(int value) const {
    for (int i = 0; i <= top; ++i) {
        if (data[i] == value) {
            return true;
        }
    }
    return false;
}

bool Stack::isEmpty() const {
    return top == -1;
}
