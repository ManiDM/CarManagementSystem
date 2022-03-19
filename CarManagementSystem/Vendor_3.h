#ifndef VENDOR_3_H
#define VENDOR_3_H
#include "AudioHw.h"
#include "DisplayHw.h"
#include "c12InchDisplay.h"
#include "Car.h"

class Vendor_3
{
    DisplayHw *m_displayHw;
    AudioHw *m_audioHw[3];
    Car *m_car;
public:
    Vendor_3();
    ~Vendor_3();

    void init();
     void registerWithVendor2(Car * obj);

};

#endif // VENDOR_3_H
