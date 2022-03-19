#include "Vendor_3.h"
#include <iostream>

using std::cout;
using std::endl;

Vendor_3::Vendor_3()
{
    cout <<endl<< "Vendor_3 Constructor" << endl;
//    init();
}

Vendor_3::~Vendor_3()
{
    cout << "Vendor_3 Destructor" << endl;
    delete m_displayHw;
    delete m_audioHw[0];
    delete m_audioHw[1];
    delete m_audioHw[2];
}

void Vendor_3::init()
{
    m_displayHw = new DisplayHw(3);
    m_audioHw[0] = new AudioHw(8,2);
    m_audioHw[1] = new AudioHw(1,4);
    m_audioHw[2] = new AudioHw(6,3);
}

void Vendor_3::registerWithVendor2(Car *obj)
{
    m_car = obj;
    m_car->reciveData();
}
