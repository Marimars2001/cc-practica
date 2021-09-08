#include "Platos.hh"
#include <iostream>

Platos::Platos(unsigned int quantity, float radius, PlateType plateType)
{
    this->quantity = quantity;
    this->radius = radius;
    this->plateType = plateType;
}

Platos::~Platos()
{
    std::cout << "Borrado" << std::endl;
}

unsigned int Platos::GetQuantity() const
{
    return quantity;
}

float Platos::GetRadius() const
{
    return radius;
}

PlateType Platos::GetPlateType() const
{
    return plateType;
}

std::string Platos::GetPlateTypeStr() const
{
    return plateType == CERAMIC ? "CERAMIC" : plateType == CRYSTAL ? "CRYSTAL" : plateType == CARDBORD ? "CARDBORD" : "PLASTIC";
}