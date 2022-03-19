#include "Base.h"
#include <iostream>
#include "Vendor_1.h"
using std::cout;
using std::endl;


Base::Base()
{
    cout << endl << "Base Constructor" << endl;
    setVersion("Base");
    init();
}

Base::~Base()
{
    cout << "Base Destructor" << endl;
    delete m_vendor1;
}

void Base::init()
{
    m_vendor1 = new Vendor_1;
    m_vendor1->registerWithMe(this);

}

void Base::reciveData()
{
    m_vendor1->init();
}

