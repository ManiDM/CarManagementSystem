#include "Vendor_2.h"
#include "DisplayHw.h"
#include <iostream>

using std::cout;
using std::endl;

Vendor_2::Vendor_2()
{
    cout <<endl<< "Vendor_2 Constructor" << endl;
    init();
}

Vendor_2::~Vendor_2()
{
    cout << "Vendor_2 Destructor" << endl;
    delete m_displayHw;
    for(m_it=m_list.begin(); m_it!=m_list.end(); ++m_it){
        if((*m_it) != nullptr){
            delete (*m_it);
        }
    }
}

void Vendor_2::init()
{
    m_displayHw = new DisplayHw(2);
    m_audioHw = nullptr;

    m_audioHw = new AudioHw(6,2);
    m_list.push_back(m_audioHw);
    m_audioHw = new AudioHw(1,4);
    m_list.push_back(m_audioHw);
    m_audioHw = new AudioHw(4,3);
    m_list.push_back(m_audioHw);
}

void Vendor_2::registerWithVendor2(Car *obj)
{
    m_car = obj;
    m_car->reciveData();
}


