#ifndef ICAR
#define ICAR

#include "CarA.c++"
#include "CarB.c++"
class ICar
{
public:
    void refillEnergy() {};
    static ICar* createCarA() {
        return static_cast<ICar*>(new CarA());
    }
    static ICar* createCarA() {
        return static_cast<ICar*>(new CarB());
    }
};

#endif