#ifndef VENDOR_1_H
#define VENDOR_1_H
#include "DisplayHw.h"
#include "c8InchDisplay.h"
#include "AudioHw.h"
#include "InterFace.h"
//#include <vector>
#include "Car.h"
class Vendor_1
{
    DisplayHw *m_displayHw;
    c8InchDisplay *m_8InchDisplay;
    AudioHw *m_audioHw[2];

    Car *m_car;

public:
    Vendor_1();
    ~Vendor_1();

    void init();
   void registerWithMe(Car *obj);
//   void collectParts();
};

#endif // VENDOR_1_H
