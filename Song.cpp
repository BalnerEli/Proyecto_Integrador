#include "Song.h"

Song::Song(){
  artistName="";
}

Song::Song(int _ID, string _nameAudio, double _duration, int _numberOfReproductions, int _likes, int _dislikes, string _comments, string _genere, string _artistName)
    : Audio(_ID, _nameAudio, _duration, _numberOfReproductions, _likes, _dislikes, _comments, _genere) {
    artistName = _artistName;
}

void Song::reproduce()
{
    std::cout<<"The reproduced song is:"<<nameAudio<<std::endl;
}

void Song::showInformation() {
    Audio::showInformation();
    std::cout << "Artist Name: " << artistName << std::endl;
}
