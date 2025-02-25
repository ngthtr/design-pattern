#ifndef MILK_TEA
#define MILK_TEA
#include "../IMilkTea.cpp"
class MilkTea : public IMilkTea
{
public:
    int cost() override
    {
        return 5;
    }
};
#endif