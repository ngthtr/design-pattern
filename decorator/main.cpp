#include <iostream>
#include "toppings/MilkTea.cpp"
#include "toppings/Bubble.cpp"
#include "toppings/Taro.cpp"
#include "toppings/Vera.cpp"

IMilkTea* addTopping(int number, IMilkTea* milkTea)
{
    std::cout << "addTopping = " << number << std::endl;
    switch (number)
    {
    case 1:
        return new Bubble(milkTea);
    case 2:
        return new Taro(milkTea);
    case 3:
        return new Vera(milkTea);
    default:
        return milkTea;
    }
}

int main(int argc, char const *argv[])
{
    MilkTea* milk = new MilkTea();
    IMilkTea* order = addTopping(2, milk);
    order = addTopping(3, order);
    order = addTopping(1, order);
    std::cout << order->cost() << std::endl;
    delete order;
    delete milk;
    return 0;
}
