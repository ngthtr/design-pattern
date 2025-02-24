#ifndef CAR_B
#define CAR_B

#include <iostream>
class CarB : public ICar
{
public:
    void refillEnergy() override {
        std::cout << "charge battery" << std::endl;
    }
};
#endif