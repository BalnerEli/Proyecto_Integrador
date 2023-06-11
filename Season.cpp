#include "Season.h"
#include "Episode.h"

Season::Season(int numberOfEpisodes) : numberOfEpisodes(numberOfEpisodes) { }

vector<Episode*> Season::getEpisodes() {
    return episodes;
}

void Season::addEpisode(Episode* episode) {
    episodes.push_back(episode);
}

int Season::getNumberOfEpisodes() {
    return episodes.size();
}

std::string Season::getSeasonInfo() {
    std::string content = "-----------------------\n";

    for (int j = 0; j < episodes.size(); ++j) {
        content += "Description: " + episodes[j]->getDescription() + "\n";
        content += "Episode Name: " + episodes[j]->getNameEpisode() + "\n";
    }

    content += "-----------------------\n";
    return content;
}
/*
string Season::getSeasonInfo() {
    string content = "-----------------------\n";
    for (Episode* episode : episodes) {
        content += "Description: " + episode->getDescription() + "\n";
        content += "Epidode Name: " + episode->getNameEpisode() + "\n";
    }
    content += "------------------------\n";
    return content;
}


string Season::getSeasonInfo()
{
string content = "-----------------------\n";
for(int j = 0; j < episodes.size(); ++j)
{
string detailedContent =""; 
content = content + detailedContent + " \n";
content = content + animals[j]->eat() + " \n";
content = content + animals[j]->drinkWater() + " \n";
content = content + "Description: "+ to_string(episodes[j]->getDescription()) + " \n";

content = content + "Episode Name: "+ animals[j]->getGender() + " \n";
}
content = content + "-----------------------";
return content;
}
*/


