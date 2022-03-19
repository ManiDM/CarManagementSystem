#ifndef C10INCHDISPLAY_H
#define C10INCHDISPLAY_H
#include "PhoneFunction.h"
#include "Navigation.h"
#include "Media.h"

class c10InchDisplay
{
    PhoneFunction *m_phoneFunction;
    Navigation *m_navigation;
    Media *m_media;

public:
    c10InchDisplay();
    ~c10InchDisplay();

    void init();
};

#endif // C10INCHDISPLAY_H
