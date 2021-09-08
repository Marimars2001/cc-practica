#pragma once
#include "Platos.hh"

class Node
{
    private:
        Platos* plato{};
    public:
        Node* nextNode{};
        Node(Platos*& plato);
        ~Node();
        Platos* GetPlato() const;
};