#include "IMilkTea.cpp"
class MilkTea : public IMilkTea
{
public:
    int cost() override {
        return 10;
    }
};
