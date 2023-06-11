#ifndef PODCAST
#define PODCAST
#include "Audio.h"
#include "Season.h"

class Podcast:public Audio
{
    private:
        Season Seasons;
        int numberOfEpisodes;
        int numberOfSeasons;

    public:
        Podcast();
        Podcast(int _ID, string _nameAudio, double _duration, int _numberOfReproductions, int _likes, int _dislikes, string _comments, string _genere, int _numberOfEpisodes, int _numberOfSeasons);
        int getNumberOfEpisodes();
        int getNumberOfSeasons();
        void reproduce() override; 
};
#endif