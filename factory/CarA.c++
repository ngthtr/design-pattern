#ifndef CAR_A
#define CAR_A
#include <iostream>
#include "ICar.c++"
class CarA : public ICar
{
public:
    void refillEnergy() override {
        std::cout << "fill oil" << std::endl;
    }
};
#endif