#include "Stack.hh"

Stack::Stack()
{

}

Stack::~Stack()
{

}

void Stack::Push(Platos*& plato)
{
    if(IsEmpty())
    {
        head = new Node(plato);
    }
    else
    {
        Node* last{head};
        head = new Node(plato);
        head->nextNode = last;
    }
}

void Stack::Pop()
{

}

bool Stack::IsEmpty()
{
    return head == nullptr;
}

Node* Stack::Peek() const
{
    return head;
}