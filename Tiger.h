#ifndef TIGER_H
#define TIGER_H
#include "Animal.h"

class Tiger: public Animal
{
    public:
        Tiger(string, int);
        string eat() override;
        string eat(string);
        string drinkWater() override;
};

#endif // TIGER_H
