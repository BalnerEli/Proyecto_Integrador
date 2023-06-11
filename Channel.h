//Channel.h
#ifndef CHANNEL
#define CHANNEL
#include <iostream>
#include "Audio.h"
using namespace std;

class Channel{
    private:
        Audio Audios;
        string ownerName;
        string chanelName;
        int subscribers;
        string ChannelTipe;

    public:
        Channel();
        Channel (string, string, int, string);
        void agregaAudio(Audio)
        int addSubscriber ();
        int substractSubscriber ();
        int getOwnerName();
        string getChannelName();
        int getSubscribers();
        string getChannelTipe ();
};
#endif

