//EPISODE.h
#ifndef EPISODE
#define EPISODE
#include <iostream>
using namespace std;

class Episode{
    private:
        string description;

    public:
        Episode();
        Episode (int);
        string getDescription();
};
#endif
