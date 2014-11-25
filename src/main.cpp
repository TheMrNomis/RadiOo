#include <iostream>
#include <SFML/Audio.hpp>

int main()
{
    sf::Music music;
    music.openFromFile("../whats_the_use_of_getting_sober.mp3");
    return EXIT_SUCCESS;
}
