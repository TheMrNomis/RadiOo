#ifndef H_AUDIOSAMPLE
#define H_AUDIOSAMPLE

#include <SFML/Audio.hpp>

class AudioSample
{
    public:
        AudioSample();
        int length();
        void play();
        void stop();
        void setVolume(float volume);
        virtual ~AudioSample() = 0;
    protected:
        sf::Music m_audio;
};

#endif
