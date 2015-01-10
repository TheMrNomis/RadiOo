#include "AudioSample.hpp"

AudioSample::AudioSample():m_audio(){}

AudioSample::~AudioSample(){}

int AudioSample::length()
{
    return m_audio.getDuration().asSeconds();
}

void AudioSample::play()
{
    m_audio.play();
}

void AudioSample::stop()
{
    m_audio.stop();
}

void AudioSample::setVolume(float volume)
{
    m_audio.setVolume(volume);
}
