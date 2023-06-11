#include "Song.h"

Song::Song(int _ID, string _nameAudio, double _duration, int _numberOfReproductions, int _likes, int _dislikes, string _comments, string _genere, string _artistName):Audio(int, string, double, int, int, int, string, string);
{
}


void Song::reproduce()
{
    return "A Song is being reproducing";
}

string Song::getNumberOfEpisodes()
{
    return numberOfEpisodes
}

string Song::getNumberOfSeasons()
{
    return numberOfSeasons
}
