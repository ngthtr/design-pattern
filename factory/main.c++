#include "ICar.c++"
int main(int argc, char const *argv[])
{
    int number = 1;
    ICar* car;
    switch (number)
    {
    case 0:
        car = ICar::createCarA();
        break;
    case 1:
        car = ICar::createCarB();
        break;
    default:
        break;
    }
    car->refillEnergy();
    return 0;
}
