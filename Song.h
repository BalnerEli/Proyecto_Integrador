#ifndef SONG
#define SONG
#include "Audio.h"

class Song:public Audio
{
    private:
        string artistName;

    public:
        Song();
        Song(int _ID, string _nameAudio, double _duration, int _numberOfReproductions, int _likes, int _dislikes, string _comments, string _genere, string _artistName);
        string getNameArtistName();
        void reproduce() override; 
};
#endif