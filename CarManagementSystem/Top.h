#ifndef TOP_H
#define TOP_H
#include <iostream>
using std::cout;
using std::endl;

//#include "InterFace.h"
#include "Vendor_3.h"
#include "Car.h"

class Top:public Car
{
    Vendor_3 *m_vendor3;
public:
    Top();
    ~Top();
    void init();
    void reciveData();
};

#endif // TOP_H
