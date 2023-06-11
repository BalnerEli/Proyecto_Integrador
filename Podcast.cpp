#include "Podcast.h"

Podcast::Podcast(int _ID, string _nameAudio, double _duration, int _numberOfReproductions, int _likes, int _dislikes, string _comments, string _genere, int _numberOfEpisodes, int _numberOfSeasons):Audio(int , string, double, int, int, int, string, string);
{
}


void Podcast::reproduce()
{
    return "A podcast is being reproducing";
}

string Podcast::getNumberOfEpisodes()
{
    return numberOfEpisodes
}

string Podcast::getNumberOfSeasons()
{
    return numberOfSeasons
}
