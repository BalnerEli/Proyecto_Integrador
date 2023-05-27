//SEASON.h
#ifndef SEASON
#define SEASON
#include <iostream>
using namespace std;

class SEASON{
    private:
        int numberOfEpisodes;

    public:
        Episode();
        Episode (int);
        int getNumberOfEpisodes();
};
#endif