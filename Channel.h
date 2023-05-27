//Channel.h
#ifndef CHANNEL
#define CHANNEL
#include <iostream>
using namespace std;

class Channel{
    private:
        string ownerName;
        string chanelName;
        int subscribers;
        string ChannelTipe;

    public:
        Channel();
        Channel (string, sitring, int, string);
        int addSubscriber ();
        int substractSubscriber ();
        int getOwnerName();
        string getChannelName();
        int getSubscribers();
        string getChannelTipe ();
};
#endif