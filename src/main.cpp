#include <iostream>
#include <SFML/Audio.hpp>
#include <FLAC++/metadata.h>

int main(int argc, const char* argv[])
{
    if(argc < 2)
        return EXIT_FAILURE;
    sf::Music music;
    if(!music.openFromFile(argv[1]))
        return EXIT_FAILURE;

    //metadatas
    FLAC::Metadata::VorbisComment vorbisComment;
    FLAC::Metadata::get_tags(argv[1], vorbisComment);

//	FLAC::Metadata::VorbisComment::Entry e;

	for(int i = 0; i < vorbisComment.get_num_comments(); i++)
        std::cout<<vorbisComment.get_comment(i).get_field()<<std::endl;

    music.play();
    sf::Time t = music.getDuration();
    sf::Clock c;
    while(c.getElapsedTime() < t)
    {}
    return EXIT_SUCCESS;
}
