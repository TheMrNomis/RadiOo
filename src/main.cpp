#include <iostream>
#include <SFML/Audio.hpp>

int main(int argc, const char* argv[])
{
    if(argc < 2)
        return EXIT_FAILURE;
    sf::Music music;
    if(!music.openFromFile(argv[1]))
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}
