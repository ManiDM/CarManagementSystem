#ifndef C12INCHDISPLAY_H
#define C12INCHDISPLAY_H
#include "PhoneFunction.h"
#include "Navigation.h"
#include "Media.h"
#include "ClimateControl.h"
#include "VehicalInfo.h"


class c12InchDisplay
{
    PhoneFunction *m_phoneFunction;
    Navigation *m_navigation;
    Media *m_media;
    ClimateControl *m_climateControl;
    VehicalInfo *m_vehicalInfo;

public:
    c12InchDisplay();
    ~c12InchDisplay();

    void init();
};

#endif // C12INCHDISPLAY_H
