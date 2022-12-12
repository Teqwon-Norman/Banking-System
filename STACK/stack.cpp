#include <iostream>
#include <cassert>
#include "stack.h"

Stack::~Stack()
{
  while (top != nullptr)
    {
      Node *temp = top;
      top = top->next;
      delete temp;
    }
}

void Stack::push(int val)
{
  Node *temp;
  temp = new Node;
  temp->val = val;
  temp->next = top;
  size++;
  top = temp;
  
}

int Stack::pop(int &num)
{
  assert(!isEmpty());
  Node *temp;
  num = top->val;
  temp = top->next;
  delete top;
  top = temp;
  return num;
}

bool Stack::isEmpty()
{
  return (!top);
}

