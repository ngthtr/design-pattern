#ifndef I_MILK_TEA_DECORATOR
#define I_MILK_TEA_DECORATOR
#include "IMilkTea.cpp"
#include <memory>
#include <iostream>

class IMilkTeaDecorator : public IMilkTea
{
protected:
    IMilkTea* mMilkTea;
public:
    IMilkTeaDecorator(IMilkTea* _MilkTea) : mMilkTea(_MilkTea) {};
    virtual int cost() {
        std::cout << "Call from IMilkTeaDecorator" << std::endl;
        return mMilkTea->cost();
    };
};
#endif