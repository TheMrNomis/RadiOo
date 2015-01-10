#include <iostream>
#include <SFML/Audio.hpp>
#include <FLAC++/metadata.h>
#include "SongInfo.hpp"

int main(int argc, const char* argv[])
{
    if(argc < 2)
        return EXIT_FAILURE;
    sf::Music music;
    if(!music.openFromFile(argv[1]))
        return EXIT_FAILURE;

    //metadatas
    SongInfo si(argv[1]);
    std::cout << si.getArtist() << std::endl;
    std::cout << si.getTitle() << std::endl;

    music.play();
    sf::Time t = music.getDuration();
    sf::Clock c;
    while(c.getElapsedTime() < t)
    {}
    return EXIT_SUCCESS;
}
