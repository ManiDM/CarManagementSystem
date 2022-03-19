#include "AudioHw.h"

AudioHw::AudioHw(int times, int whichAudioHw)
{
    cout << "Audio Constructor" << endl;
    switch(whichAudioHw){
    case 1:
        m_radio = nullptr;
        for(int i = 0 ; i<times; i++){
            m_radio = new Radio;
        }
        break;

    case 2:
        m_speaker = nullptr;
        for(int i = 0 ; i<times; i++){
            m_speaker = new Speaker;
            m_listSpeaker.push_back(m_speaker);
        }
        break;

    case 3:
        m_twits = nullptr;
        for(int i = 0 ; i<times; i++){
            m_twits = new Twits;
            m_listTwits.push_back(m_twits);
        }
        break;

    default:
        m_woffer = nullptr;
        for(int i = 0 ; i<times; i++){
            m_woffer = new Woffer;
            m_listWoffer.push_back(m_woffer);
        }
        break;
    }

}

AudioHw::~AudioHw()
{
    cout << "Audio Destructor" << endl;
    for(m_speakerIt = m_listSpeaker.begin(); m_speakerIt!=m_listSpeaker.end();++m_speakerIt){
        if(*m_speakerIt!=nullptr){
            delete (*m_speakerIt);
        }
    }
    for(m_twitsIt = m_listTwits.begin(); m_twitsIt!=m_listTwits.end();++m_twitsIt){
        if(*m_twitsIt!=nullptr){
                    delete (*m_twitsIt);
        }

    }
    for(m_wofferIt = m_listWoffer.begin(); m_wofferIt!=m_listWoffer.end();++m_wofferIt){
        if(*m_wofferIt!=nullptr){delete (*m_wofferIt);}

    }

}
