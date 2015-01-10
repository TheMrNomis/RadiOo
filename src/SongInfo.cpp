#include "SongInfo.hpp"

SongInfo::SongInfo(const char* fileName)
{
    initialize(fileName);
}

SongInfo::SongInfo(std::string fileName)
{
    initialize(fileName.c_str());
}

void SongInfo::initialize(const char* fileName)
{
    FLAC::Metadata::VorbisComment vorbisComment;
    FLAC::Metadata::get_tags(fileName, vorbisComment);

	for(int i = 0; i < vorbisComment.get_num_comments(); i++)
	{
	    FLAC::Metadata::VorbisComment::Entry e = vorbisComment.get_comment(i);
	    std::string fieldName = e.get_field_name();
        if(fieldName == "ARTIST")
            m_artist = e.get_field_value();
        else if(fieldName == "TITLE")
            m_title = e.get_field_value();
    }
}

std::string SongInfo::getTitle(){return m_title;}
std::string SongInfo::getArtist(){return m_artist;}
