#include "Audio.h"
#include "Podcast.h"
#include "Song.h"

Audio::Audio(){
    ID=0;
    nameAudio= "";
    duration= 0;
    numberOfReproductions= 0;
    likes= 0;
    dislikes= 0;
    comments= "";
    genere= "";
}
Audio::Audio(int _ID, string _nameAudio, double _duration, int _numberOfReproductions, int _likes, int _dislikes, string _comments, string _genere){
    ID=_ID;
    nameAudio= _nameAudio;
    duration= _duration;
    numberOfReproductions= _numberOfReproductions;
    likes= _likes;
    dislikes= _dislikes;
    comments= _comments;
    genere= _genere;
}

int Audio::getID()
{
    return ID;
}

void Audio::showInformation()  {
    std::cout << "ID: " << ID << std::endl;
    std::cout << "Name: " << nameAudio << std::endl;
    std::cout << "Duration: " << duration << " min" << std::endl;
    std::cout << "Number of Reproductions: " << numberOfReproductions << std::endl;
    std::cout << "Likes: " << likes << std::endl;
    std::cout << "Dislikes: " << dislikes << std::endl;
    std::cout << "Genere: " << genere << std::endl;
    std::cout << "Comments: " << comments << std::endl;
    std::cout << "Satisfacción: " << calculateSatisfaction() << "%" << std::endl;
}

double Audio::calculateSatisfaction()
{
    int total=likes+dislikes;
    if (total == 0)
        return 0.0;
    else
        return (static_cast<double>(likes) / total) * 100;
}


