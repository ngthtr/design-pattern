#ifndef BUBBLE
#define BUBBLE
#include "../IMilkTeaDecorator.cpp"
#include <iostream>

class Bubble : public IMilkTeaDecorator
{
public:
    Bubble(IMilkTea* _MilkTea) : IMilkTeaDecorator(_MilkTea) {};
    int cost() override
    {
        std::cout << "Call from Bubble" << std::endl;
        return mMilkTea->cost() + 5;
    }
};
#endif