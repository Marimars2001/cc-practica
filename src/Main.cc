#include <iostream>
#include "Platos.hh"
#include "Stack.hh"

int main()
{
    /*Platos* plat1{new Platos(1,0.1f,CARDBORD)};
    std::cout << "Cantidad de platos: " << plat1->GetQuantity() << std::endl;
    std::cout << "radio del plato: " << plat1->GetRadius() << std::endl;
    std::cout << "Tipo del plato" << plat1->GetPlateTypeStr() << std::endl;*/

    Platos* plat1{new Platos(2,0.3f,CARDBORD)};
    Platos* plat2{new Platos(6,0.4f,CRYSTAL)};
    Platos* plat3{new Platos(7,0.2f,CERAMIC)};
    Platos* plat4{new Platos(8,0.6f,PlASTIC)};

    Stack* stack{new Stack()};
    stack->Push(plat1);
    stack->Push(plat2);
    stack->Push(plat3);
    stack->Push(plat4);

    Node* currentNode{stack->Peek()};
    while(currentNode)
    {
        std::cout << "Cantidad del plato: " << currentNode->GetPlato()->GetQuantity() << std::endl;
        std::cout << "Radio del plato: " << currentNode->GetPlato()->GetRadius() << std::endl;
        std::cout << "Tipo de plato: " << currentNode->GetPlato()->GetPlateTypeStr() << std::endl;
        currentNode = currentNode->nextNode;
    }
    
    std::cin.get();
    return 0;
}