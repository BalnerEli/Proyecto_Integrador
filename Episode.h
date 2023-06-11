//EPISODE.h
#ifndef EPISODE
#define EPISODE
#include <iostream>
using namespace std;

class Episode{
    private:
        string description;
        string nameEpisode;

    public:
        Episode();
        Episode (string, string);
        string getDescription();
        string getNameEpisode();
};
#endif

