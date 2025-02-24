#include "PeopleBuilder.c++"
#include <iostream>
#include <memory>

int main(int argc, char const *argv[])
{
    std::shared_ptr<People> people = (new PeopleBuilder())
                                        ->setName("Truong")
                                        ->setAge(2)
                                        ->build();
    std::cout << people->age << std::endl;
    return 0;
}
