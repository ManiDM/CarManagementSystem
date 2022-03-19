#include "c12InchDisplay.h"
#include <iostream>
using std::cout;
using std::endl;
c12InchDisplay::c12InchDisplay()
{
    cout << "c12InchDisplay Constructor" << endl;
    init();
}

c12InchDisplay::~c12InchDisplay()
{
    cout << "c12InchDisplay Destructor" << endl;
    delete m_phoneFunction;
    delete m_navigation;
    delete m_media;
    delete m_climateControl;
    delete m_vehicalInfo;
}

void c12InchDisplay::init()
{
    m_phoneFunction = new PhoneFunction;
    m_navigation = new Navigation;
    m_media = new Media;
    m_climateControl = new ClimateControl;
    m_vehicalInfo = new VehicalInfo;
}
