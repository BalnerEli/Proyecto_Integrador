//SEASON.h
#ifndef SEASON_H
#define SEASON_H
#include <vector>
#include <typeinfo>
#include <iostream>
using namespace std;
#include "Episode.h"

//use of inheritance 
class Season{
    private:
        vector <Episode*> episodes;
        int numberOfEpisodes;

    public:
        Season(vector <Episode*>);
        Season(int);
        vector <Episode*> getEpisodes();
        void addEpisode(Episode*);
        int getNumberOfEpisodes();
        string getSeasonInfo();
};
#endif //SEASON_H


