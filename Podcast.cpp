#include "Podcast.h"
#include "Season.h"
#include "Audio.h"
#include "Episode.h"
#include <iostream>

Podcast::Podcast() {
    numberOfSeasons = 0;
}

Podcast::Podcast(int _ID, string _nameAudio, double _duration, int _numberOfReproductions, int _likes, int _dislikes, string _comments, string _genere, int _numberOfSeasons)
    : Audio(_ID, _nameAudio, _duration, _numberOfReproductions, _likes, _dislikes, _comments, _genere) {
    numberOfSeasons = _numberOfSeasons;
}

Podcast::Podcast(vector <Season*> getseasons)
{
this->seasons = getseasons;
}

void Podcast::reproduce() {
    std::cout << "The reproduced Podcast is: " << nameAudio << std::endl;
}

int Podcast::getNumberOfSeasons() {
    return numberOfSeasons;
}

void Podcast::showInformation() {
    Audio::showInformation();
    std::cout << "Number of Seasons: " << numberOfSeasons << std::endl;
  
}

void Podcast::addSeason(Season& season) {
    seasons.push_back(&season);
}


