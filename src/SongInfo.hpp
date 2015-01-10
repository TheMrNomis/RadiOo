#include <iostream>
#include <FLAC++/metadata.h>

class SongInfo
{
    public:
        SongInfo(const char* fileName);
	    std::string getArtist();
	    std::string getTitle();
    private:
        std::string m_artist;
        std::string m_title;
};
