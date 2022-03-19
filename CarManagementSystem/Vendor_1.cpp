#include "Vendor_1.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

Vendor_1::Vendor_1()
{
    cout <<endl<< "Vendor_1 Constructor" << endl;
}


void Vendor_1::registerWithMe(Car *obj)
{
    m_car = obj;
    m_car->reciveData();
}


void Vendor_1::init()
{
    m_displayHw = new DisplayHw(1);
    m_audioHw[0] = new AudioHw(4,2);
    m_audioHw[1] = new AudioHw(2,3);
}

Vendor_1::~Vendor_1()
{
    cout << "Vendor_1 Destructor" << endl;
    delete m_displayHw;
    delete m_audioHw[0];
    delete m_audioHw[1];
}
