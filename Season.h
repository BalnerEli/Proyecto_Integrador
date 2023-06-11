//SEASON.h
#ifndef SEASON
#define SEASON
#include <iostream>
using namespace std;
#include "Episode.h"

class Season{
    private:
        Episode Episodes;
        int numberOfEpisodes;

    public:
        Season();
        Season (int);
        int getNumberOfEpisodes();
};
#endif