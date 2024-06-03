#pragma once
#include "IStack.h"
#include <iostream>

class Stack : public IStack {
private:
    int* data;
    int capacity;
    int top;
    void resize(int new_capacity);

public:
    Stack(int initial_capacity = 10);
    ~Stack();
    void push(int value) override;
    int pop() override;
    void print() const override;
    bool search(int value) const override;
    bool isEmpty() const override;
};
