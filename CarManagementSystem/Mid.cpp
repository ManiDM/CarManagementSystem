#include "Mid.h"
#include <iostream>

using std::cout;
using std::endl;

Mid::Mid()
{
    cout << endl << "Mid Constructor" << endl;
    setVersion("Mid");
    init();
}

Mid::~Mid()
{
    cout << "Base Destructor" << endl;
    delete m_vendor2;
}

void Mid::init()
{

   m_vendor2 = new Vendor_2;
   m_vendor2->registerWithVendor2(this);

}

void Mid::reciveData()
{
    m_vendor2->init();
}
