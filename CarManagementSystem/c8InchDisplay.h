#ifndef C8INCHDISPLAY_H
#define C8INCHDISPLAY_H
#include "PhoneFunction.h"
//#include "DisplayHw.h"
class c8InchDisplay/*:public DisplayHw*/
{
    PhoneFunction *m_phoneFunction;
public:
    c8InchDisplay();
    ~c8InchDisplay();
    void getDisplay();
    void init();
};

#endif // C8INCHDISPLAY_H
