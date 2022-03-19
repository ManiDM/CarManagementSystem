#ifndef DISPLAYHW_H
#define DISPLAYHW_H
#include "c8InchDisplay.h"
#include "c10InchDisplay.h"
#include "c12InchDisplay.h"

class DisplayHw
{
    c8InchDisplay *m_c8Inch;
    c10InchDisplay *m_c10Inch;
    c12InchDisplay *m_c12Inch;
    DisplayHw();
public:
    DisplayHw(int);
    ~DisplayHw();

//    virtual void getDisplay()=0;
};

#endif // DISPLAYHW_H
