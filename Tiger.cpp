#include "../include/Tiger.h"

Tiger::Tiger(string gender, int age):Animal(gender, age)
{
}

string Tiger::eat()
{
    return "I am a tiger and I eat cat food";
}

string Tiger::eat(string food)
{
    return "I am a tiger and I eat "+ food;
}

string Tiger::drinkWater()
{
    return "I am a tiger and I am drinking water";
}
