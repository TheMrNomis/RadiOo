#ifndef H_SONGINFO
#define H_SONGINFO

#include <iostream>
#include <FLAC++/metadata.h>

class SongInfo
{
    public:
        SongInfo(const char* fileName);
        SongInfo(std::string fileName);
	    std::string getArtist();
	    std::string getTitle();
    private:
        void initialize(const char* fileName);

        std::string m_artist;
        std::string m_title;
};

#endif
