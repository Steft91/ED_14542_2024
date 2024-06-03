#pragma once

class IStack {
public:
    virtual ~IStack() {}
    virtual void push(int value) = 0;
    virtual int pop() = 0;
    virtual void print() const = 0;
    virtual bool search(int value) const = 0;
    virtual bool isEmpty() const = 0;
};
