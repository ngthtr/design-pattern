#ifndef TARO
#define TARO
#include "../IMilkTeaDecorator.cpp"
class Taro : public IMilkTeaDecorator
{
public:
    Taro(IMilkTea* _MilkTea) : IMilkTeaDecorator(_MilkTea){}
    int cost() override
    {
        std::cout << "Call from Taro" << std::endl;
        return mMilkTea->cost() + 10;
    }
};
#endif