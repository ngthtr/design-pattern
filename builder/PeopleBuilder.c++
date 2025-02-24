#ifndef PEOPLE_BUILDER
#define PEOPLE_BUILDER

#include "People.c++"
#include <string>
#include <memory>

class PeopleBuilder
{
private:
    std::shared_ptr<People> mPeople;
public:
    PeopleBuilder() 
    {
        mPeople = std::make_shared<People>();
    }
    PeopleBuilder* setName(std::string name)
    {
        this->mPeople->name = name;
        return this;
    }
    PeopleBuilder* setAge(int age)
    {
        this->mPeople->age = age;
        return this;
    }
    std::shared_ptr<People> build()
    {
        return this->mPeople;
    }
};

#endif
