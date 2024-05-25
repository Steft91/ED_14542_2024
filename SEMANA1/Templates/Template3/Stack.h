#ifndef STACK_H
#define STACK_H

#include<vector>
#include<stdexcept>

template <typename T>
class Stack{
private:
    std::vector<T> elementos;

public:
    void push(const T& item); //apilar
    void pop(); //desapilar
    T top() const; //obtener el elemento de la cima
    bool isEmpty() const; //verificar si la pila esta vacía
 
};

template <typename T>
void Stack<T>::push(const T& item){
    elementos.push_back(item);
}

template <typename T>
void Stack<T>::pop(){
    if(elementos.empty()){
        throw std::out_of_range("Stack<>::pop(): empty stack");
    }
    elementos.pop_back();
}

template <typename T>
T Stack<T>::top()const{
    if(elementos.empty()){
        throw std::out_of_range("Stack<>::top(): empty stack");
    }
    return elementos.back();
}

template <typename T>
bool Stack<T>::isEmpty() const{
    return elementos.empty();
}

#endif 