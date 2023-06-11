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
        double calculateSatisfaction();
        //Polymorphism aplied since classes hace different ways of doing the same method
        virtual void reproduce()=0;
        virtual void showInformation();
        int getID() ;

};
#endif