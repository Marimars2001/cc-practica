#pragma once
#include "Platos.hh"
#include "Node.hh"

class Stack
{
    private:
        Node* head{};
    public:
        Stack();
        ~Stack();
        void Push(Platos*& plato);
        void Pop();
        bool IsEmpty();
        Node* Peek() const;
};