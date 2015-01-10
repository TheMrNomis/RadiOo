#include "MusicSample.hpp"

MusicSample::MusicSample(std::string fileName):AudioSample(),m_infos(fileName)
{
    //m_audio();// = new sf::Music;
    m_audio.openFromFile(fileName);
    // = new SongInfo(fileName)
}

MusicSample::~MusicSample()
{
//    delete m_audio;
//    delete m_infos;
}

std::string MusicSample::getArtist(){return m_infos.getArtist();}

std::string MusicSample::getTitle(){return m_infos.getTitle();}
