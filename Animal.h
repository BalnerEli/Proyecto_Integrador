#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{
    protected:
        int age;
        string gender;

    public:
        Animal(string, int);
        int getAge();
        string getGender();
        virtual string eat();
        virtual string drinkWater()=0;

};

#endif // ANIMAL_H
