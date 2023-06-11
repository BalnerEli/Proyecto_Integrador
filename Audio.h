//AUDIO.h
#ifndef AUDIO
#define AUDIO
#include <iostream>
using namespace std;

class Audio{
    protected:
        int ID ;
        string nameAudio;
        double duration;
        int numberOfReproductions;
        int likes;
        int dislikes;
        string comments;
        string genere;

    public:
        Audio();
        Audio (int, string, double, int, int, int, string, string);
        int calculateSatisfaction();
        virtual void reproduce();
        int getID();
        string getNameAudio();
        double getDuration();
        int getNumberOfReproductions();
        int getLikes();
        int getDislikes();
        string getComments();
        string getGenere();
};
#endif