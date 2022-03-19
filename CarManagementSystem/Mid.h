#ifndef MID_H
#define MID_H

#include "Car.h"
#include "Vendor_2.h"
class Mid:public Car
{
    Car *m_car;
    Vendor_2 *m_vendor2;
public:
    Mid();
    ~Mid();

    void init();
    void reciveData();
};

#endif // MID_H
