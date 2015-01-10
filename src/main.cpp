#include <iostream>
#include <SFML/Audio.hpp>
#include <FLAC++/metadata.h>
#include "SongInfo.hpp"
#include "AudioSample.hpp"
#include "MusicSample.hpp"

int main(int argc, const char* argv[])
{
    if(argc < 2)
        return EXIT_FAILURE;

    //music
    MusicSample m(argv[1]);

    //metadatas
    std::cout << m.getArtist() << std::endl;
    std::cout << m.getTitle() << std::endl;

    m.play();
    sf::Clock c;
    while(c.getElapsedTime().asSeconds() < m.length())
    {}
    return EXIT_SUCCESS;
}
