#include "Audio.h"
#include "Song.h"
#include "Podcast.h"
#include "Episode.h"
#include "Season.h"
#include <iostream>
#include <vector>

int main() {
    vector<Audio*> audios;
    vector<Season*> seasons;
    vector<Episode*> episodes;

    Song song1(1, "Clint Eastwood", 3.54, 190, 189, 9, "Pop", "Nice song", " Gorillaz");
    Song song2(2, "Radio Ga Ga", 190, 200, 25, 8, "Rock", "OMG! I love this song","Queen");
    Podcast podcast(3, "Tech Podcast", 3.27, 2000, 100, 10,"I like the way they teach", 
    "Education", 1);

    Season season(1);
    Episode episode1("You will learn about Polymorphism", "Polymorphism");
    Episode episode2("You will learn about Abstract Classes", "Abstract Classes");

    podcast.addSeason(season);
    podcast.addSeason(season);

    audios.push_back(&song1);
    audios.push_back(&song2);
    audios.push_back(&podcast);

    int option = 0;
    while (option != 4) {
        std::cout << "==== Welcome to spotify ===" << std::endl;
        std::cout << "1. See Songs" << std::endl;
        std::cout << "2. See Podcast" << std::endl;
        std::cout << "3. Reproduce Audio" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter an option: ";
        std::cin >> option;

        switch (option) {
            case 1: {
                std::cout << "=== SONGS ===" << std::endl;
                for (Audio* audio : audios) {
                    if (dynamic_cast<Song*>(audio) != nullptr) {
                        audio->showInformation();
                        std::cout << std::endl;
                    }
                }
                break;
            }
            case 2: {
                std::cout << "=== PODCASTS ===" << std::endl;
                for (Audio* audio : audios) {
                    if (dynamic_cast<Podcast*>(audio) != nullptr) {
                        audio->showInformation();
                        std::cout << std::endl;
                    }
                }
                int id;
                std::cout << "Give me the season you want to see: ";
                std::cin >> id;
                if (id==1)
                {
                  std::cout << "=== Episodes ===" << std::endl;
                  std::cout << season.getSeasonInfo();
                  int id2;
                  std::cout << "Give me the episode you want to see: ";
                  std::cin >> id2;
                }
                else{
                   std::cout << "Invalid Option." << std::endl;
                   break;
                }              
                break;
            }
            //virtual function reproduce is called, overriding is aplied 
            case 3: {
                int id;
                std::cout << "Give me the audio ID you want to reproduce: "<<std::endl;
                std::cin >> id;

                for (Audio* audio : audios) {
                    if (audio->getID() == id) {
                        audio->reproduce();
                        break;
                    }
                }
                break;
            }
           
            case 4:
                std::cout << "Thank you, bye..." << std::endl;
                break;
            default:
                std::cout << "Invalid Option." << std::endl;
                break;
        }

        std::cout << std::endl;
    }

    return 0;
}
