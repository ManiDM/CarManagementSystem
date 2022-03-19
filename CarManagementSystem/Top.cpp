#include "Top.h"
#include <iostream>
using std::cout;
using std::endl;

Top::Top()
{
    cout << endl << "Top Constructor" << endl;
    setVersion("Top");
    init();
}

Top::~Top()
{
    cout << "Top Destructor" << endl;
    delete m_vendor3;
}

void Top::init()
{
    m_vendor3 = new Vendor_3;
    m_vendor3->registerWithVendor2(this);

}

void Top::reciveData()
{
    m_vendor3->init();
}
