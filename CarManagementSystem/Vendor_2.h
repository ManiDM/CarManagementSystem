#ifndef VENDOR_2_H
#define VENDOR_2_H
//#include "InterFace.h"
#include "AudioHw.h"
#include "DisplayHw.h"
#include "c10InchDisplay.h"
#include "Car.h"
#include <list>
class Vendor_2
{
    DisplayHw *m_displayHw;
    AudioHw *m_audioHw;
    Car *m_car;
    std::list<AudioHw*> m_list;
    std::list<AudioHw*>::iterator m_it;
public:
    Vendor_2();
    ~Vendor_2();

    void init();
    void registerWithVendor2(Car * obj);
//    void collectParts();
};

#endif // VENDOR_2_H
