#ifndef PODCAST
#define PODCAST
#include "Audio.h"
#include "Season.h"
#include "Episode.h"
#include <vector>
#include <typeinfo>

//use of inheritance 
class Podcast:public Audio 
{
    private:
        vector <Season*> seasons;
        int numberOfSeasons;


    public:
        Podcast();
        Podcast(int _ID, string _nameAudio, double _duration, int _numberOfReproductions, int _likes, int _dislikes, string _comments, string _genere, int _numberOfSeasons);
        Podcast(vector <Season*>);
        vector <Season*> getSeasons();
        int getNumberOfSeasons();
        void reproduce() override; 
        void showInformation() override;
        void addSeason(Season& season);
};
#endif

