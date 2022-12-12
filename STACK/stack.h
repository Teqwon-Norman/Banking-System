#ifndef STACK_H
#define STACK_H

#include <string>

class Stack {
private:
    struct Node {
        int val;
        Node *next;
    };

    int size;
    Node *top;

public:
    Stack() { top = nullptr; };
    ~Stack();

    void push(int);
    int pop(int&);
    bool isEmpty();
    int getSize() { return size; };
};
#endif
