#include "Audio.h"

Audio::Audio(string nameAudio, double duration, int numberOfReproductions, int likes, int dislikes, string comments, string genere)
{
    this->nameAudio= nameAudio;
    this->duration= duration;
    this->nameAudio= numberOfReproductions;
    this->duration= likes;
    this->nameAudio= dislikes;
    this->duration= comments;
    this->nameAudio= genere;
}

int Audio::calculateSatisfaction()
{
    return likes*100/(likes + dislikes);
}

string Audio::reproduce()
{
    return "Se está reproduciendo";
}

string Audio::getNameAudio()
{
    return nameAudio
}

string Audio::getDuration()
{
    return duration
}
string Audio::getNumberOfReproductions()
{
    return numberOfReproductions
}
string Audio::getLikes()
{
    return likes
}
string Audio::getDislikes()
{
    return dislikes
}
string Audio::getComments()
{
    return comments
}
string Audio::getGenere()
{
    return genere
}
