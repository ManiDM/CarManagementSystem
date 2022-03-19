#include "c10InchDisplay.h"
#include <iostream>
using std::cout;
using std::endl;

c10InchDisplay::c10InchDisplay()
{
    cout << "c10InchDisplay Constructor" << endl;
    init();
}

c10InchDisplay::~c10InchDisplay()
{
    cout << "c10InchDisplay Destructor" << endl;
    delete m_phoneFunction;
    delete m_navigation;
    delete m_media;
}

void c10InchDisplay::init()
{
    m_phoneFunction = new PhoneFunction;
    m_navigation = new Navigation;
    m_media = new Media;
}
