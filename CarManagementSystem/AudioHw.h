#ifndef AUDIOHW_H
#define AUDIOHW_H
#include <iostream>
#include "Radio.h"
#include "Speaker.h"
#include "Twits.h"
#include "Woffer.h"
#include <list>
using std::cout;
using std::endl;

class AudioHw
{

    Radio *m_radio;
    Speaker *m_speaker;
    Twits *m_twits;
    Woffer *m_woffer;
    std::list<Speaker*> m_listSpeaker;
    std::list<Speaker*>::iterator m_speakerIt;
    std::list<Twits*> m_listTwits;
    std::list<Twits*>::iterator m_twitsIt;
    std::list<Woffer*> m_listWoffer;
    std::list<Woffer*>::iterator m_wofferIt;
    AudioHw();
public:
    AudioHw(int times,int which);

     ~AudioHw();

};

#endif // AUDIOHW_H
