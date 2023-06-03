#include "../include/Animal.h"

Animal::Animal(string gender, int age)
{
    this->age= age;
    this->gender= gender;
}

int Animal::getAge()
{
    return age;
}

string Animal::getGender()
{
    return gender;
}

string Animal::eat()
{
    return "I eat cat food";
}

