#include "Episode.h"

Episode::Episode(){
  description="";
  nameEpisode="";
}

Episode::Episode(string _description, string _nameEpisode){
  description=_description;
  nameEpisode=_nameEpisode;
};

string Episode::getDescription(){
  std::cout << "Here is a little resume of this episode: " << description << std::endl;
}

string Episode::getNameEpisode(){
  std::cout << "Episode Name: " << nameEpisode << std::endl;
}

