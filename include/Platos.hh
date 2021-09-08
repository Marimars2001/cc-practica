#pragma once
#include "PlateType.hh"
#include <string>

class Platos
{
    private:
        unsigned int quantity{};
        float radius{};
        PlateType plateType{};
    public:
        Platos(unsigned int quantity, float radius, PlateType plateType);
        ~Platos();
        unsigned int GetQuantity() const;
        float GetRadius() const;
        PlateType GetPlateType() const;
        std::string GetPlateTypeStr() const;
};