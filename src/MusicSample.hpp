#ifndef H_MUSICSAMPLE
#define H_MUSICSAMPLE

#include <iostream>
#include "AudioSample.hpp"
#include "SongInfo.hpp"

class MusicSample : public AudioSample
{
    public:
        MusicSample(std::string fileName);
        ~MusicSample();
        std::string getArtist();
        std::string getTitle();
    private:
        SongInfo m_infos;
};

#endif
