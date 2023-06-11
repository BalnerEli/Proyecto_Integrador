#include "Channel.h"
#include <sstream>

Channel::Channel(string _ownerName, int _channelName, string _subscribers, string _ChannelTipe){
    ownerName = _ownerName;
    channelName = _chanelName;
    subscribers = _subscribers;
    ChannelTipe=_ChannelTipe;
    audio = _audio;
}
        void agregaAudio(Audio)
        int addSubscriber ();
        int substractSubscriber ();
        int getOwnerName();
        string getChannelName();
        int getSubscribers();
        string getChannelTipe ();



int Channel::addSubscriber(){
  aux << audio.getAudioInfo();
  return aux.str();
}

int Channel::substractSubscriber(){
  
}
string Channel::getOwnerName(){
  
}
string Channel::getChannelName(){
  
}
int Channel::getSubscribers(){
  
}
string Channel::getChannelTipe(){
  
}
