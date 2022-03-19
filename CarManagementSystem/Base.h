#ifndef BASE_H
#define BASE_H

#include "Car.h"
#include "Vendor_1.h"
class Base:public Car
{
    Vendor_1 * m_vendor1;

public:
    Base();
    ~Base();
    void init();
    void reciveData();


};

#endif // BASE_H
