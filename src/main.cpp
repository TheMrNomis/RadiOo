#include <iostream>
#include <SFML/Audio.hpp>

int main()
{
    sf::Music music;
    music.openFromFile("/home/nomis/Musique/Imagine Dragons - Night Visions (2012) - FLAC/01 - Radioactive.flac");
    music.play();
    while(1){}
    return EXIT_SUCCESS;
}
