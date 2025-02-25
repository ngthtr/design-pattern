#ifndef VERA
#define VERA
#include "../IMilkTeaDecorator.cpp"
class Vera : public IMilkTeaDecorator
{
public:
    Vera(IMilkTea* _MilkTea) : IMilkTeaDecorator(_MilkTea){}
    int cost() override
    {
        std::cout << "Call from Vera" << std::endl;
        return mMilkTea->cost() + 15;
    }
}; 
#endif